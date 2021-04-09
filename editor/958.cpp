//
// Created by Administrator on 2021/3/28.
//
#include <iostream>
#include <queue>
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
    queue<TreeNode*> q;
public:
    bool isCompleteTree(TreeNode* root) {
        if(!root)
            return true;
        q.push(root);
        TreeNode* treenode=nullptr;
        while(!q.empty()){
            treenode=q.front();
            q.pop();
            if(treenode==nullptr){
                while(!q.empty()){
                    if(q.front())
                        return false;
                    q.pop();
                }
                return true;
            }
            q.push(treenode->left);
            q.push(treenode->right);
        }
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
    int a[]={1,2,3,4,5,6};
    int length = sizeof(a) / sizeof(int);
    TreeNode *treeNode;
    insert(treeNode, a, length, 0);
    Solution solution;
    bool ans= solution.isCompleteTree(treeNode);
    printf("%d",ans);
    return 0;
}