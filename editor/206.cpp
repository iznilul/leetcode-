//
// Created by Administrator on 2021/3/5.
//
#include <iostream>
using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};
//class Solution {
//public:
//    ListNode* reverseList(ListNode* head) {
//        ListNode *curr =head;
//        ListNode* pre= nullptr;
//        ListNode *next= nullptr;
//        while(curr){
//            next = curr->next;
//            curr->next=pre;
//            pre=curr;
//            curr=next;
//        }
//        return pre;
//    }
//};
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(!head||!head->next){
            return head;
        }
        ListNode* ans=reverseList(head->next);
        head->next->next=head;
        head->next= nullptr;
        return ans;
    }
};
int main(){
    int a[]={1,2,3,4,5};
    ListNode *head = nullptr;
    ListNode *tail= nullptr;
    for(auto i:a){
        ListNode *node = new ListNode(i);
        if(nullptr==head) {
            head = node;
            tail=head;
        }
        tail->next=node;
        tail=node;
    }
    Solution solution;
    ListNode *ans = solution.reverseList(head);
    return 0;
}