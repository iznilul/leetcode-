//
// Created by Administrator on 2020/12/23.
//
#include <iostream>
#include <queue>
using namespace std;
int A[]={2,4,9};
int B[]={5,6,4,9};
struct ListNode {
    int val;
    ListNode *next;

    ListNode(int x) : val(x), next(nullptr) {}

    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
ListNode* initNode(int a[],int length){
   ListNode *head= nullptr;
   ListNode *end = nullptr;
    for (int i = 0; i < length; i++) {
       auto *node = (ListNode *)malloc(sizeof(ListNode));
        node->val = a[i];
        node->next = nullptr;
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
//void show(ListNode *head){
//    while(head) {
//        printf("%d\n", head->val);
//        head = head->next;
//    }
//}
//ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
//    ListNode *head = nullptr;
//    ListNode *tail= nullptr;
//    int sum;
//    int l1val,l2val;
//    int temp=0;
//    while ( l1 || l2) {
//        l1val=l1?l1->val:0;
//        l2val=l2?l2->val:0;
//        sum=(l1val+l2val+temp)%10;
//        if(!head){
//            head = tail = new ListNode(sum
//            );
//        } else {
//            tail->next = new ListNode(sum
//            );
//            tail = tail->next;
//        }
//        temp=(l1val+l2val+temp)/10;
//        if(l1)
//            l1 = l1->next;
//        if(l2)
//            l2 = l2->next;
//    }
//    if(temp)
//        tail->next = new ListNode(temp);
//    return head;
//}
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        queue<int> s1;
        queue<int> s2;
        int flag=0;
        ListNode* head=nullptr;
        ListNode* tail=head;
        while(l1){
            s1.push(l1->val);
            l1=l1->next;
        }
        while(l2){
            s2.push(l2->val);
            l2=l2->next;
        }
        while(!s1.empty()||!s2.empty()||flag){
            int x=s1.empty()?0:s1.front();
            if(!s1.empty()) s1.pop();
            int y=s2.empty()?0:s2.front();
            if(!s2.empty()) s2.pop();
            int result=x+y;
            ListNode* node=new ListNode(result%10+flag);
            if(!head){
                head=node;
            }else{
                tail->next=node;
            }
            tail=node;
            flag=result%10;
        }
        return head;
    }
};
int main(){
    int length1 = sizeof(A) / sizeof(int);
    int length2 = sizeof(B) / sizeof(int);
   ListNode *n1 =nullptr;
   ListNode *n2 =nullptr;
    n1 = initNode(A, length1);
    n2 = initNode(B, length2);
//    show(n1);
//    show(n2);
    Solution solution;
    ListNode* node = solution.addTwoNumbers(n1, n2);
    return 0;
}
