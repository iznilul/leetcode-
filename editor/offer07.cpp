//
// Created by Administrator on 2021/2/5.
//
#include <iostream>
#include <vector>
#include <unordered_map>
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
    unordered_map<int,int> index;
public:
    TreeNode* myBuildTree(const vector<int> &preorder, const vector<int> &inorder,int preorderLeft,int preorderRight,int inorderLeft,int inorderRight){
        if(preorderLeft>preorderRight)
            return nullptr;
        int preorderRoot = preorderLeft;
        int inorderRoot = index[preorder[preorderRoot]];
        TreeNode *tree = new TreeNode(inorder[inorderRoot]);
        int size = inorderRoot - inorderLeft;
        tree->left = myBuildTree(preorder, inorder, preorderRoot + 1, preorderRoot + size, inorderLeft, inorderLeft + size);
        tree->right = myBuildTree(preorder, inorder, preorderRoot + 1+size, preorderRight, inorderRoot+1, inorderRight);
        return tree;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int length = inorder.size();
        for(int i=0;i<length;i++)
            index[inorder[i]]=i;
        return myBuildTree(preorder, inorder, 0, length - 1, 0, length - 1);
    }
};
int main(){
    Solution solution;
    vector<int> pre={3,9,20,15,7};
    vector<int> in={9,3,15,20,7};
    TreeNode *tree = solution.buildTree(pre, in);
    return 0;
}