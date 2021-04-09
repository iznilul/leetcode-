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
    TreeNode* mergeTrees(TreeNode* t1, TreeNode* t2) {
        if(t1== nullptr)
            return t2;
        if(t2== nullptr)
            return t1;
        TreeNode *treeNode = new TreeNode(t1->val + t2->val);
        treeNode->left = mergeTrees(t1->left, t2->left);
        treeNode->right = mergeTrees(t1->right, t2->right);
        return treeNode;
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
void preOrder(TreeNode *treeNode){
    if(treeNode!= nullptr){
        printf("%d\n", treeNode->val);
        preOrder(treeNode->left);
        preOrder(treeNode->right);
    }
}
int main(){
    int a[]={1,3,2,5,NULL,NULL,NULL};
    int b[]={2,1,3,NULL,4,NULL,7};
    int length1 = sizeof(a) / sizeof(int);
    int length2 = sizeof(b) / sizeof(int);
    TreeNode *treeNode1 = nullptr;
    TreeNode *treeNode2 = nullptr;
    insert(treeNode1, a, length1, 0);
    insert(treeNode2, b, length2, 0);
    Solution solution;
    TreeNode *treeNode=solution.mergeTrees(treeNode1, treeNode2);
    return 0;
}