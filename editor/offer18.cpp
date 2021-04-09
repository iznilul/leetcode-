//
// Created by Administrator on 2021/2/9.
//
#include <iostream>
struct ListNode {
          int val;
          ListNode  *next;
          ListNode(int x) : val(x), next(nullptr) {};
          ListNode():val(NULL),next(nullptr){}
      };
class Solution {
public:
    ListNode* deleteNode(ListNode* head, int val) {
        ListNode* tail=head;
        ListNode* node=head;
        while(node!= nullptr){
            if(node->val==val){
                if(node==head)
                    return head->next;
                else{
                    tail->next=node->next;
                }
            }
            tail=node;
            node=node->next;
        }
        return head;
    }
};
int main(){
    Solution solution;
    int a[]={4,5,1,9};
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
    ListNode *node = solution.deleteNode(head, 4);
    return 0;
}