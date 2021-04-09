//
// Created by Administrator on 2021/2/2.
//
#include <iostream>
#include <vector>
#include <stack>
using namespace std;
 struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(nullptr) {}
 };
ListNode* initNode(int a[],int length){
    ListNode *head= nullptr;
    ListNode *end = nullptr;
    for (int i = 0; i < length; i++) {
        auto *node = new ListNode(a[i]);
        if(nullptr==head) {
            head = node;
            end = node;
        }
        else{
            end->next = node;
            end = node;
        }
    }
    return head;
}
class Solution {
public:
    vector<int> reversePrint(ListNode* head) {
        if(head== nullptr)
            return {};
        stack<int> stack;
        vector<int> v;
        while(head!= nullptr){
            stack.push(head->val);
            head = head->next;
        }
        while(!stack.empty()){
            v.push_back(stack.top());
            stack.pop();
        }
        return v;
    }
};
int main(){
    Solution solution;
    int a[]={1,3,2};
    int length = sizeof(a) / sizeof(int);
    ListNode* head=initNode(a, length);
    vector<int> v = solution.reversePrint(head);
    return 0;
}