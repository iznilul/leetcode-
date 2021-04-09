//输入一棵二叉树和一个整数，打印出二叉树中节点值的和为输入整数的所有路径。从树的根节点开始往下一直到叶节点所经过的节点形成一条路径。 
//
// 
//
// 示例: 
//给定如下二叉树，以及目标和 sum = 22， 
//
//               5
//             / \
//            4   8
//           /   / \
//          11  13  4
//         /  \    / \
//        7    2  5   1
// 
//
// 返回: 
//
// [
//   [5,4,11,2],
//   [5,8,4,5]
//]
// 
//
// 
//
// 提示： 
//
// 
// 节点总数 <= 10000 
// 
//
// 注意：本题与主站 113 题相同：https://leetcode-cn.com/problems/path-sum-ii/ 
// Related Topics 树 深度优先搜索 
// 👍 133 👎 0



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
//leetcode submit region end(Prohibit modification and deletion)


