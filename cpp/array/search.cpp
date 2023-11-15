//
// Created by 98508 on 2023/11/11.
//

#include "../func.h"
using namespace std;

void moveZeroes(vector<int>& nums) {
    int n = nums.size();
    int low = 0;
    int high =0;
    while(high < n) {
        if(nums[high]!= 0) {
            swap(nums[low], nums[high]);
            low++;
        }
        high++;
    }
}

/*
 * bool backspaceCompare(string S, string T){
    int i = S.length() - 1 , j = T.length() - 1;
    int skipS = 0, skipT = 0;
    while(i>=0 || j>=0){
        while(i >= 0) {
            if (S[i] == '#') {
                skipS++;
                i--;
            } else if (skipS > 0) {
                skipS--;
                i--;
            } else {
                break;
            }
        }

        while(j >= 0) {
            if (S[j] == '#') {
                skipT++;
                j--;
            } else if (skipT > 0) {
                skipT--;
                j--;
            } else {
                break;
            }
        }

        if(i >= 0 && j >=0){




        }

    }
    return true;

    }
   */

/*
//最长模板：
 int left ,right ,result, bestrusult
 while(right < nums.size()){
    窗口扩大，加入right对应元素，更新rusult
    while(result 不满足要求){
        窗口缩小，移除left对应元素，left右移
    }
    更新最优结果bestresult
    right++
}

//最短模板
 int left ,right ,result, bestrusult
 while(right < nums.size()){
    窗口扩大，加入right对应元素，更新当前result
    while(result满足要求){
        更新最优结果bestresult
        窗口缩小，移除left对应元素,left右移
    }
    right++
}

*/

int minSubArrayLen(int target, vector<int>& nums) {
    int n = nums.size();
    int left = 0, right = 0 , sum = 0;
    int result = INT_MAX;
    while (right < n ){
        sum += nums[right];
        while (sum >= target){
            result = result > right - left + 1 ? right - left + 1 : result;
            sum -= nums[left];
            left++;
        }
        right++;
    }
    return result == INT_MAX? 0: result;
}

/*
有问题，回头再看
int toralFruit(vector<int>& fruits){
    int n = fruits.size();
    int left = 0, right = 0, result = 0;
    int sublength = 0;
    while(right < n){
        if(fruits[right] != fruits[left]){
            int temp = fruits[right];
            while (fruits[right] != temp){
                sublength = right - left +1;
                result = result < sublength ? sublength : result;
            }
            right++;
        else{
            result++;
            right++;
        }
    }


}

*/
//产生规则二维螺旋数组
vector<vector<int>> generateMatrix(int n){
    vector<vector<int>> res(n, vector<int> (n,0));
    int startx = 0 , starty = 0;
    int loop = n / 2;
    int mid = n / 2;
    int offset = 1;
    int count = 1;
    while (loop--) {
        int i = startx;
        int j = starty;

        for (; j < n - offset; j++) {
            res[i][j] = count++;
        }

        for (; i < n - offset; i++) {
            res[i][j] = count++;
        }

        for (; j > starty; j--) {
            res[i][j] = count++;
        }

        for (; i > startx; i--) {
            res[i][j] = count++;
        }

        startx++;
        starty++;
        offset++;
    }
    if(n%2){
        res[mid][mid]=n*n;
    }
    return res;
}


//输出规则二维螺旋数组
vector<int> spiralArray1(vector<vector<int>>& array) {
    vector<int> ans;
    int startx = 0 , starty = 0;
    int n = array.size();
    int loop = n / 2;
    int mid = n / 2;
    int offset = 1;
    while (loop--){
        int i = startx;
        int j = starty;

        for (; j < n - offset; j++) {
            ans.push_back(array[i][j]);
        }

        for (; i < n - offset; i++) {
            ans.push_back(array[i][j]);
        }

        for (; j > starty; j--) {
            ans.push_back(array[i][j]);
        }

        for (; i > startx; i--) {
            ans.push_back(array[i][j]);
        }

        startx++;
        starty++;
        offset++;
    }

    if(n%2){
        ans.push_back(array[mid][mid]);
    }
    return ans;
}


//输出不规则二维螺旋数组,定义上边界，下边界，左边界，右边界
vector<int> spiralOrder2(vector<vector<int>>& matrix) {
    vector<int> ans;
    int u = 0;
    int d = matrix.size() - 1;
    int l = 0;
    int r = matrix[0].size() - 1;
    int i = 0 ,j = 0;
    while (true){
        for (int i = l; i < r; i++) {ans.push_back(matrix[u][i]) }
        if(++u > d) break;
    }

}



