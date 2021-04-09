//
// Created by Administrator on 2021/2/12.
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
    bool judge(TreeNode* A,TreeNode* B){
        if(B== nullptr) return true;
        if(A== nullptr||A->val!=B->val) return false;
        return judge(A->left, B->left) && judge(A->right, B->right);
    }
    bool isSubStructure(TreeNode* A, TreeNode* B) {
        return (A != nullptr && B != nullptr) && (judge(A, B) || isSubStructure(A->left, B) || isSubStructure(A->right, B));
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
    int a[]={3,4,5,12};
    int b[] = {4, 1};
    int length = sizeof(a) / sizeof(int);
    int length1 = sizeof(b) / sizeof(int);
    TreeNode *treeNode;
    TreeNode *treeNode1;
    insert(treeNode, a, length, 0);
    insert(treeNode1, b, length1, 0);
    Solution solution;
    printf("%d", solution.isSubStructure(treeNode, treeNode1));
    return 0;
}