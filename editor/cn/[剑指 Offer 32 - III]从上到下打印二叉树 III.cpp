//请实现一个函数按照之字形顺序打印二叉树，即第一行按照从左到右的顺序打印，第二层按照从右到左的顺序打印，第三行再按照从左到右的顺序打印，其他行以此类推。 
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
//  [20,9],
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
// Related Topics 树 广度优先搜索 
// 👍 73 👎 0



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
        int size = q.size(),count=0,flag=0;
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
                if(flag){
                    reverse(v.begin(), v.end());
                    flag=0;
                }else
                    flag=1;
                ans.push_back(v);
                v={};
                count=0;
                size = q.size();
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


