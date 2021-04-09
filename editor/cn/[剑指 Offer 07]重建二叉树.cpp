//输入某二叉树的前序遍历和中序遍历的结果，请重建该二叉树。假设输入的前序遍历和中序遍历的结果中都不含重复的数字。 
//
// 
//
// 例如，给出 
//
// 前序遍历 preorder = [3,9,20,15,7]
//中序遍历 inorder = [9,3,15,20,7] 
//
// 返回如下的二叉树： 
//
//     3
//   / \
//  9  20
//    /  \
//   15   7 
//
// 
//
// 限制： 
//
// 0 <= 节点个数 <= 5000 
//
// 
//
// 注意：本题与主站 105 题重复：https://leetcode-cn.com/problems/construct-binary-tree-from-
//preorder-and-inorder-traversal/ 
// Related Topics 树 递归 
// 👍 310 👎 0



//leetcode submit region begin(Prohibit modification and deletion)
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
    unordered_map<int,int> index;
public:
    TreeNode* myBuildTree(const vector<int>& preorder, const vector<int>& inorder,int preorderLeft,int preorderRight,int inorderLeft,int inorderRight){
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
//leetcode submit region end(Prohibit modification and deletion)


