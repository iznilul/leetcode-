//
// Created by Administrator on 2021/3/29.
//
#include <iostream>
#include <vector>

using namespace std;
struct ListNode {
    int val;
    ListNode  *next;
    ListNode(int x) : val(x), next(nullptr) {};
    ListNode():val(NULL),next(nullptr){}
};
class Solution {
public:
    ListNode *merge(ListNode* l1,ListNode* l2){
        ListNode *dummyNode=new ListNode(0);
        ListNode* tail=dummyNode;
        while(l1&&l2){
            if(l1->val<=l2->val){
                tail->next=l1;
                l1=l1->next;
            }
            else{
                tail->next=l2;
                l2=l2->next;
            }
            tail=tail->next;
        }
        tail->next=l1?l1:l2;
        return dummyNode->next;
    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode* ans=nullptr;
        for(auto list:lists)
            ans=merge(ans,list);
        return ans;
    }
};
int main(){
    vector<ListNode*> lists;
    vector<int> a={1,4,5};
    vector<int> b={1,3,5};
    vector<int> c={2,6};
    vector<vector<int>> nums;
    nums.emplace_back(a);
    nums.emplace_back(b);
    nums.emplace_back(c);
    for(int i=0;i<nums.size();i++) {
        ListNode *dummyhead = new ListNode(0);
        ListNode *tail = dummyhead;
        for (auto i:nums[i]) {
            ListNode *node = new ListNode(i);
            tail->next = node;
            tail = node;
        }
        lists.emplace_back(dummyhead->next);
    }
    Solution solution;
    ListNode *node = solution.mergeKLists(lists);
    return 0;
}