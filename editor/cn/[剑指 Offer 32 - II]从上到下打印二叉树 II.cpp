//从上到下按层打印二叉树，同一层的节点按从左到右的顺序打印，每一层打印到一行。 
//
// 
//
// 例如: 
//给定二叉树: [3,9,20,null,null,15,7], 
//
//     3
//   / \
//  9  20
//    /  \
//   15   7
// 
//
// 返回其层次遍历结果： 
//
// [
//  [3],
//  [9,20],
//  [15,7]
//]
// 
//
// 
//
// 提示： 
//
// 
// 节点总数 <= 1000 
// 
//
// 注意：本题与主站 102 题相同：https://leetcode-cn.com/problems/binary-tree-level-order-tra
//versal/ 
// Related Topics 树 广度优先搜索 
// 👍 80 👎 0



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
    queue<TreeNode*> q;
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(nullptr==root)
            return ans;
        q.push(root);
        TreeNode* node;
        vector<int> v;
        int size = q.size(),count=0;
        while(!q.empty()){
            node = q.front();
            q.pop();
            v.push_back(node->val);
            count++;
            if(node->left!=nullptr) {
                q.push(node->left);
            }
            if(node->right!= nullptr) {
                q.push(node->right);
            }
            if(count==size) {
                count=0;
                ans.push_back(v);
                v={};
                size = q.size();
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


