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
    ListNode* getKthFromEnd(ListNode* head, int k) {
        int count=0;
        ListNode* node=head;
        while(node){
            count++;
            node = node->next;
        }
        int num=count-k;
        node=head;
        for(int i=0;i<num;i++){
            node = node->next;
        }
        return node;
    }
};
int main(){
    Solution solution;
    int a[]={1,2,3,4,5,6};
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
    ListNode *node = solution.getKthFromEnd(head, 4);
    return 0;
}