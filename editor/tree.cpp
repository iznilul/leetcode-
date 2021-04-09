//
// Created by Administrator on 2021/1/26.
//
#include <iostream>
#include <vector>
using  namespace std;
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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if (p == nullptr && q == nullptr) {
            return true;
        } else if (p == nullptr || q == nullptr) {
            return false;
        } else if (p->val != q->val) {
            return false;
        } else {
            return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
        }
    }
};
void insert(TreeNode *treeNode,int n){
    TreeNode *node=new TreeNode(n);
    if(treeNode->val==NULL)
        treeNode->val = n;
    else{
        TreeNode *temp = treeNode;
        while(temp!= nullptr) {
            if (n < temp->val) {
                if (temp->left == nullptr) {
                    temp->left = node;
                    return ;
                }
                else {
                    temp = temp->left;
                }
            }else{
                if (temp->right == nullptr) {
                    temp->right = node;
                    return ;
                }
                else {
                    temp = temp->right;
                }
            }
        }
    }
}
int main(){
    Solution solution;
    TreeNode *treeNode1 = new TreeNode;
    TreeNode *treeNode2 = new TreeNode;
    vector<int> v={12,425,36,44,25,866,7,9};
    vector<int> v1={12,425,36,44,25,866,7,9};
    int length=v.size();
    int length1=v1.size();
    for (int i = 0; i < length; i++) {
        insert(treeNode1, v[i]);
    }
    for(int i=0;i<length1;i++){
        insert(treeNode2, v1[i]);
    }
    bool flag = solution.isSameTree(treeNode1, treeNode2);
    printf("%d", flag);
    return 0;
}