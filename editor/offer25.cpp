//
// Created by Administrator on 2021/2/12.
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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(nullptr==l1|| nullptr==l2)
            return l1?l1:l2;
        int val;
        ListNode* head= nullptr;
        ListNode* tail= nullptr;
        ListNode* cursor1= l1;
        ListNode* cursor2= l2;
        while(cursor1&&cursor2){
            if(cursor1->val<=cursor2->val){
                if(nullptr==head){
                    head=cursor1;
                    tail=head;
                }else{
                    tail->next=cursor1;
                    tail = cursor1;
                }
                cursor1 = cursor1->next;
            }
            else{
                if(nullptr==head){
                    head=cursor2;
                    tail=head;
                }else{
                    tail->next=cursor2;
                    tail=cursor2;
                }
                cursor2 = cursor2->next;
            }
        }
        if(cursor1||cursor2){
            tail->next=cursor1?cursor1:cursor2;
        }
        return head;
    }
};
int main(){
    Solution solution;
    int a[]={1,2,3,4};
    int b[]={1,3,6};
    ListNode* l1= nullptr;
    ListNode *l2 = nullptr;
    ListNode *head = nullptr;
    ListNode *tail= nullptr;
    ListNode* node;
    for(auto i:a){
        node = new ListNode(i);
        if(head== nullptr) {
            head = node;
            tail=head;
        }
        tail->next=node;
        tail=node;
    }
    l1=head;
    head = nullptr;
    tail= nullptr;
    for(auto i:b){
        node = new ListNode(i);
        if(head== nullptr) {
            head = node;
            tail=head;
        }
        tail->next=node;
        tail=node;
    }
    l2=head;
    node = solution.mergeTwoLists(nullptr, l2);
    return 0;
}