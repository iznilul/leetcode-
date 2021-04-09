//
// Created by Administrator on 2021/2/13.
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
    bool judge(TreeNode* left,TreeNode* right){
        if(left== nullptr&&right== nullptr) return true;
        if(left== nullptr||right== nullptr) return false;
        if(left->val!=right->val) return false;
        return judge(left->left, right->right) && judge(left->right, right->left);
    }
    bool isSymmetric(TreeNode* root) {
        if(nullptr==root)
            return true;
        return judge(root->left, root->right);
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
    int a[]={1,2,2,NULL,3,NULL,3};
    int length = sizeof(a) / sizeof(int);
    TreeNode *treeNode;
    insert(treeNode, a, length, 0);
    Solution solution;
    printf("%d", solution.isSymmetric(treeNode));
    return 0;
}
