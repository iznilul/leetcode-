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
public:
    bool verifyPostorder(vector<int>& postorder) {
        int size = postorder.size();
        if(size==0)
            return true;
        return postOrder(postorder, 0, size - 1);
    }
    bool postOrder(vector<int> postorder,int start,int end){
        int root = postorder[end];
        int left=0;
        for(int i=start;i<end;i++){
            if(postorder[i]<root)
                left++;
        }
        for(int i=start+left;i<end;i++){
            if(postorder[i]<root)
                return false;
        }
        if(left<=2&&end-start-left<=2) return true;
        else if(left<=2&&end-start-left>2) return postOrder(postorder, start + left, end - 1);
        else if(left>2&&end-start-left<=2) return postOrder(postorder,start,start+left-1);
        return postOrder(postorder, start + left, end - 1) && postOrder(postorder, start, start + left - 1);
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
    int a[]={3,9,20,1,6,15,7};
    int length = sizeof(a) / sizeof(int);
    TreeNode *treeNode;
    vector<int> v={1,3,2,6,5};
    insert(treeNode, a, length, 0);
    Solution solution;
    printf("%d", solution.verifyPostorder(v));
    return 0;
}