//
// Created by Administrator on 2021/3/16.
//
#include <iostream>
#include <vector>
#include <stack>
#include <unordered_map>
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode() : val(NULL), left(nullptr), right(nullptr) {}

    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}

    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
using namespace std;
class Solution {
    vector<int> ans;
    unordered_map<int,int> map;
    stack<TreeNode*> st;
    stack<int> depth;
public:
    vector<int> rightSideView(TreeNode* root) {
        if(root==nullptr)
            return ans;
        st.push(root);
        TreeNode* node=nullptr;
        int maxDepth=-1;
        depth.push(0);
        int de=maxDepth;
        while(!st.empty()){
            node=st.top();
            st.pop();
            de=depth.top();
            depth.pop();
            maxDepth=max(maxDepth,de);
            if(!map.count(maxDepth)){
                map[maxDepth]=node->val;
            }
            if(node->left!=nullptr){
                st.push(node->left);
                depth.push(de+1);
            }
            if(node->right!=nullptr){
                st.push(node->right);
                depth.push(de+1);
            }
        }
        for(int i=0;i<=maxDepth;i++){
            ans.push_back(map[i]);
        }
        return ans;
    }
};
void insert(TreeNode *&treeNode,int a[],int length,int index){
    if(index>=length)
        return;
    treeNode=new TreeNode;
    treeNode->val = a[index];
    insert(treeNode->left, a, length, 2 * index + 1);
    insert(treeNode->right, a, length, 2 * index + 2);
}
int main(){
    int a[]={1,2,3,NULL,5,NULL,4};
    int length = sizeof(a) / sizeof(int);
    TreeNode *treeNode;
    insert(treeNode, a, length, 0);
    Solution solution;
    vector<int> ans = solution.rightSideView(treeNode);
    return 0;
}
