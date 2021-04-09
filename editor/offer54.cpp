//
// Created by Administrator on 2021/2/26.
//
#include <iostream>
using namespace std;
   struct TreeNode {
       int val;
       TreeNode  *left;
       TreeNode  *right;
       TreeNode(int x) : val(x), left(nullptr), right(nullptr) {};
       TreeNode():val(NULL),left(nullptr),right(nullptr){}
   };
class Solution {
public:
    int res,K;
    int kthLargest(TreeNode* root, int k) {
        K=k;
        dfs(root);
        return res;
    }
    void dfs(TreeNode* root){
        if(root==nullptr) return ;
        dfs(root->right);
        if(K==0) return;
        if(--K==0) res = root->val;
        dfs(root->left);
    }
};