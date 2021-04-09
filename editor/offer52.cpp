//
// Created by Administrator on 2021/2/26.
//
#include <iostream>
#include <unordered_map>
using namespace std;
struct ListNode {
         int val;
         ListNode *next;
         ListNode(int x) : val(x), next(nullptr) {}
     };
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *nodeA=headA;
        ListNode *nodeB = headB;
        unordered_map<ListNode*,int> map;
        while(nodeA){
            map[nodeA]++;
            nodeA = nodeA->next;
        }
        while(nodeB){
            if(map[nodeB]) return nodeB;
            nodeB = nodeB->next;
        }
        return nullptr;
    }
};
int main(){
    Solution solution;
    int a[]={4,1,8,4,5};
    int b[]={5,0,1,8,4,5};
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
    ListNode* head1 = nullptr;
    ListNode* tail1= nullptr;
    for(auto i:b){
        ListNode *node = new ListNode(i);
        if(nullptr==head1) {
            head1 = node;
            tail1=head1;
        }
        tail1->next=node;
        tail1=node;
    }
    ListNode *node = solution.getIntersectionNode(head, head1);
    return 0;
}