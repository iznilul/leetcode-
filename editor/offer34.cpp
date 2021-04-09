//
// Created by Administrator on 2021/2/18.
//

#include <iostream>
#include <vector>
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
    vector<vector<int>> ans;
    vector<int> path;
public:
    void recur(TreeNode* root,int target){
        if(root==nullptr)
            return;
        int val = root->val;
        path.push_back(val);
        target -= val;
        if(target==0&&root->left==nullptr&&root->right==nullptr)
            ans.push_back(path);
        recur(root->left, target);
        recur(root->right, target);
        path.pop_back();
    }
    vector<vector<int>> pathSum(TreeNode* root, int sum) {
        recur(root, sum);
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
    int a[]={5,4,8,11,NULL,13,4,7,2,NULL,NULL,NULL,NULL,5,1};
    int length = sizeof(a) / sizeof(int);
    TreeNode *treeNode;
    insert(treeNode, a, length, 0);
    Solution solution;
    vector<vector<int>> v=solution.pathSum(treeNode,22);
    return 0;
}