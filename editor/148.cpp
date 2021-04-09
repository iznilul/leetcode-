//
// Created by Administrator on 2021/3/26.
//
#include <iostream>
using namespace std;
struct ListNode {
    int val;
    ListNode  *next;
    ListNode(int x) : val(x), next(nullptr) {};
    ListNode():val(NULL),next(nullptr){}
};
class Solution {
public:
    ListNode* sortList(ListNode* head) {
        return divide(head,nullptr);
    }
    ListNode* divide(ListNode* head,ListNode* tail){
        if(head==nullptr)
            return head;
        if(head->next==tail){
            head->next=nullptr;
            return head;
        }
        ListNode* slow=head,*fast=head;
        while(fast!=tail){
            slow=slow->next;
            fast=fast->next;
            if(fast!=tail)
                fast=fast->next;
        }
        ListNode* mid=slow;
        return merge(divide(head,mid),divide(mid,tail));
    }
    ListNode* merge(ListNode* l1,ListNode* l2){
        ListNode* preHead=new ListNode(0);
        ListNode* head=preHead;
        ListNode* t1=l1,*t2=l2;
        while(t1&&t2){
            if(t1->val<=t2->val){
                head->next=t1;
                t1=t1->next;
            }else{
                head->next=t2;
                t2=t2->next;
            }
            head=head->next;
        }
        head->next=t1?t1:t2;
        return preHead->next;
    }
};
int main(){
    int a[]={4,2,3,1};
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
    ListNode *node = solution.sortList(head);
    return 0;
}