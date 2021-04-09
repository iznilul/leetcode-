//
// Created by Administrator on 2021/2/11.
//
#include <iostream>
#include <stack>
using namespace std;
  struct ListNode {
          int val;
          ListNode  *next;
          ListNode(int x) : val(x), next(nullptr) {};
          ListNode():val(NULL),next(nullptr){};
  };
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* tail=head;
        stack<int> stack;
        while(tail!= nullptr){
            stack.push(tail->val);
            tail = tail->next;
        }
        ListNode* ansHead= nullptr;
        ListNode *ansTail = nullptr;
        while(!stack.empty()){
            if(ansHead== nullptr){
                ansHead = new ListNode(stack.top());
                ansTail = ansHead;
                stack.pop();
            }
            else{
                ListNode *node = new ListNode(stack.top());
                stack.pop();
                ansTail->next = node;
                ansTail = node;
            }
        }
        return ansHead;
    }
};
int main(){
    Solution solution;
    int a[]={1,2,3,4,5};
    ListNode *head = nullptr;
    ListNode *tail= nullptr;
    for(auto i:a){
        ListNode *node = new ListNode(i);
        if(head== nullptr) {
            head = node;
            tail=head;
        }
        tail->next=node;
        tail=node;
    }
    ListNode *node = solution.reverseList(head);
    return 0;
}