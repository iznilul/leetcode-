//
// Created by Administrator on 2021/1/27.
//
#include <iostream>
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
public:
    int height(TreeNode *root){
        if(root==nullptr)
            return 0;
        return max(height(root->left), height(root->right))+1;
    }
    int maxDepth(TreeNode* root) {
        return height(root);
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
    int a[]={3,9,20,NULL,NULL,15,7};
    int length = sizeof(a) / sizeof(int);
    TreeNode *treeNode;
    insert(treeNode, a, length, 0);
    Solution solution;
    printf("%d", solution.maxDepth(treeNode));
    return 0;
}
