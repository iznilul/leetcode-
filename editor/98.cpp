//
// Created by Administrator on 2021/3/26.
//
#include <iostream>
#include <vector>

using namespace std;
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode() : val(NULL), left(nullptr), right(nullptr) {}

    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}

    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
class Solution {
    TreeNode *pre=nullptr;
public:
    bool isValidBST(TreeNode* root) {
        if(!root)
            return true;
        if(!isValidBST(root->left))
            return false;
        if(pre&&pre->val>=root->val)
            return false;
        pre=root;
        if(!isValidBST(root->right))
            return false;
        return true;
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
    int a[]={2,1,3};
    int length = sizeof(a) / sizeof(int);
    TreeNode *treeNode;
    insert(treeNode, a, length, 0);
    Solution solution;
    bool ans= solution.isValidBST(treeNode);
    return 0;
}