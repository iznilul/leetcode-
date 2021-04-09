//
// Created by Administrator on 2021/3/29.
//

#include <iostream>
#include <deque>

using namespace std;
struct ListNode {
    int val;
    ListNode  *next;
    ListNode(int x) : val(x), next(nullptr) {};
    ListNode():val(NULL),next(nullptr){}
};
class Solution {
    deque<ListNode*> dq;
public:
    void recursion(ListNode* dummyHead,int k){
        ListNode* pre=dummyHead;
        ListNode* curr=pre->next;
        ListNode* nextStart=nullptr,*next=nullptr;
        for(int i=0;i<k;i++){
            if(!curr){
                dq.clear();
                return ;
            }
            if(i<k-1){
                dq.push_back(curr);
                curr=curr->next;
            }
            if(i==k-1){
                nextStart=curr->next;
                pre->next=curr;
                while(!dq.empty()){
                    next=dq.back();
                    dq.pop_back();
                    next->next=nullptr;
                    curr->next=next;
                    curr=next;
                }
                pre=curr;
                curr->next=nextStart;
                curr=nextStart;
                i=-1;
            }
        }
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* dummyHead=new ListNode(0);
        dummyHead->next=head;
        recursion(dummyHead,k);
        return dummyHead->next;
    }
};
int main(){
    int a[]={1,2,3,4,5};
    ListNode *dummyhead = new ListNode(0);
    ListNode* tail=dummyhead;
    for(auto i:a){
        ListNode *node = new ListNode(i);
        tail->next=node;
        tail=node;
    }
    Solution solution;
    ListNode *node = solution.reverseKGroup(dummyhead->next,3);
    return 0;
}