//
// Created by Administrator on 2021/1/26.
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
    int height(TreeNode *treeNode){
        if(treeNode== nullptr)
            return 0;
        else
            return max(height(treeNode->left),height(treeNode->right))+1;
    }
    bool isBalanced(TreeNode* root) {
        if(root== nullptr)
            return true;
        return abs(height(root->left) - height(root->right)) <= 1&&isBalanced(root->left)&&(root->right);
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
    if(treeNode!= nullptr) {
        printf("%d\n", treeNode->val);
        preOrder(treeNode->left);
        preOrder(treeNode->right);
    }
}
int main(){

//    int a[]={1,2,2,3,3,NULL,NULL,4,4};
    Solution solution;
    int a[]={1,2};
    int length=sizeof(a)/sizeof(int);
    int index=0;
    TreeNode *treeNode= nullptr;
    insert(treeNode, a,length,index);
    bool result = solution.isBalanced(treeNode);
    printf("%d", result);
    return 0;
}