#include "func.h"

using namespace std;

int main(void) {

/*    vector<int> nums = {0,1,0,3,12};

    moveZeroes(nums);
    for(int i = 0; i < nums.size();i++){
        cout << nums[i] << std::endl;
    }
*/
/*
    int s = 7, result = 0;
    vector<int> nums = {2,3,1,2,4,3};
    result = minSubArrayLen(s,nums);
    cout << "the result is :  " << result << endl;

 */
    vector<vector<int>> res = generateMatrix(5);
    vector<int> ans;
    ans = spiralArray1(res);
    system("chcp 65001");
    cout << "数组为" << endl;
    for(int i = 0; i<ans.size(); i++){
        cout << ans[i] << endl;
    }

    return 0;
}
