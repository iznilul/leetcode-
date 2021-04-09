//
// Created by Administrator on 2021/2/26.
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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root==nullptr || root==p || root==q)
            return root;

        TreeNode* leftNode=lowestCommonAncestor(root->left,p,q);
        TreeNode* rightNode=lowestCommonAncestor(root->right,p,q);

        if(leftNode==nullptr)
            return rightNode;
        if(rightNode==nullptr)
            return leftNode;

        return root;
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
    int a[]={3,5,1,6,2,0,8,NULL,NULL,7,4};
    int b[]={5,1,6,2,0,8,NULL,NULL,7,4};
    int c[]={1,6,2,0,8,NULL,NULL,7,4};
    int length = sizeof(a) / sizeof(int);
    int length1 = sizeof(b) / sizeof(int);
    int length2 = sizeof(c) / sizeof(int);
    TreeNode *treeNode;
    TreeNode *p;
    TreeNode *q;
    insert(treeNode, a, length, 0);
    insert(p, b, length, 0);
    insert(q, c, length, 0);
    Solution solution;
    TreeNode* node=solution.lowestCommonAncestor(treeNode, p, q);
    return 0;
}