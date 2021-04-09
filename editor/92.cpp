//
// Created by Administrator on 2021/3/17.
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
    void reverseList(ListNode* head){
        ListNode* pre=nullptr;
        ListNode* cur=head;
        while(cur){
            ListNode* next=cur->next;
            cur->next=pre;
            pre=cur;
            cur=next;
        }
    }
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(!head)
            return nullptr;
        if(left==right)
            return head;
        ListNode* vhead=new ListNode(-1);
        vhead->next=head;

        ListNode* pre=vhead,*leftNode=nullptr,*post=nullptr,*rightNode=nullptr;
        for(int i=0;i<left-1;i++)
            pre=pre->next;
        rightNode=pre;
        for(int i=0;i<right-left+1;i++)
            rightNode=rightNode->next;
        leftNode=pre->next;
        post=rightNode->next;
        pre->next=nullptr;
        rightNode->next=nullptr;
        reverseList(leftNode);
        pre->next=rightNode;
        leftNode->next=post;
        return vhead->next;
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
    ListNode *node = solution.reverseBetween(head, 2, 4);
    return 0;
}