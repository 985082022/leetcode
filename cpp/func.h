//
// Created by 98508 on 2023/11/11.
//

#ifndef LEETCODE_FUNC_H
#define LEETCODE_FUNC_H

#include <iostream>
#include <vector>
using namespace std;


//************数组************//
void moveZeroes(vector<int>& nums);
int minSubArrayLen(int target, vector<int>& nums);
int toralFruit(vector<int>& fruits);
vector<vector<int>> generateMatrix(int n);
vector<int> spiralArray1(vector<vector<int>>& array);
vector<int> spiralOrder2(vector<vector<int>>& matrix);

//************链表************//
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
ListNode* removeElements1(ListNode* head, int val);

//双指针反转链表
ListNode* reverseList(ListNode* head);
//递归反转链表
ListNode* reverse(ListNode* left , ListNode* right);
ListNode* reverse(ListNode* head);
//两两交换链表中的节点
ListNode* swapPairs(ListNode* head);

#endif //LEETCODE_FUNC_H
