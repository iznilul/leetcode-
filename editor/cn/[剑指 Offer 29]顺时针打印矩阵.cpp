//输入一个矩阵，按照从外向里以顺时针的顺序依次打印出每一个数字。 
//
// 
//
// 示例 1： 
//
// 输入：matrix = [[1,2,3],[4,5,6],[7,8,9]]
//输出：[1,2,3,6,9,8,7,4,5]
// 
//
// 示例 2： 
//
// 输入：matrix = [[1,2,3,4],[5,6,7,8],[9,10,11,12]]
//输出：[1,2,3,4,8,12,11,10,9,5,6,7]
// 
//
// 
//
// 限制： 
//
// 
// 0 <= matrix.length <= 100 
// 0 <= matrix[i].length <= 100 
// 
//
// 注意：本题与主站 54 题相同：https://leetcode-cn.com/problems/spiral-matrix/ 
// Related Topics 数组 
// 👍 188 👎 0



//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int width=matrix.size();
        if(width==0||matrix[0].size()==0)
            return ans;
        int length = matrix[0].size();
        int count=width*length;
        int i=0,j=0,k=0,a;
        int up=0,left=0,down=width-1,right=length-1;
        while(k<count){
            for(j=left;j<=right&&k<count;j++){
                a=matrix[i][j];
                ans.push_back(a);
                k++;
            }
            j=right;
            up++;
            for(i=up;i<=down&&k<count;i++){
                a=matrix[i][j];
                ans.push_back(a);
                k++;
            }
            i=down;
            right--;
            for(j=right;j>=left&&k<count;j--){
                a=matrix[i][j];
                ans.push_back(a);
                k++;
            }
            j=left;
            down--;
            for(i=down;i>=up&&k<count;i--){
                a=matrix[i][j];
                ans.push_back(a);
                k++;
            }
            i=up;
            left++;
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


