//输入一个整数数组，判断该数组是不是某二叉搜索树的后序遍历结果。如果是则返回 true，否则返回 false。假设输入的数组的任意两个数字都互不相同。 
//
// 
//
// 参考以下这颗二叉搜索树： 
//
//      5
//    / \
//   2   6
//  / \
// 1   3 
//
// 示例 1： 
//
// 输入: [1,6,3,2,5]
//输出: false 
//
// 示例 2： 
//
// 输入: [1,3,2,6,5]
//输出: true 
//
// 
//
// 提示： 
//
// 
// 数组长度 <= 1000 
// 
// 👍 193 👎 0



//leetcode submit region begin(Prohibit modification and deletion)
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
//leetcode submit region end(Prohibit modification and deletion)


