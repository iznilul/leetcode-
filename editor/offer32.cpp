//
// Created by Administrator on 2021/2/18.
//
#include <iostream>
#include <vector>
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
    vector<int> ans;
    queue<TreeNode*> q;
public:
    vector<int> levelOrder(TreeNode* root) {
        if(nullptr==root)
            return ans;
        q.push(root);
        TreeNode* node;
        while(!q.empty()){
            node = q.front();
            q.pop();
            if(node->val!=NULL)
                ans.push_back(node->val);
            if(node->left!=nullptr)
                q.push(node->left);
            if(node->right!= nullptr)
                q.push(node->right);
        }
        return ans;
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
    int a[]={1,2};
    int length = sizeof(a) / sizeof(int);
    TreeNode *treeNode;
    vector<int> v;
    insert(treeNode, a, length, 0);
    Solution solution;
    v = solution.levelOrder(treeNode);
    return 0;
}