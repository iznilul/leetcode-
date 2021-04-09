//给定一个非负整数 numRows，生成杨辉三角的前 numRows 行。 
//
// 
//
// 在杨辉三角中，每个数是它左上方和右上方的数的和。 
//
// 示例: 
//
// 输入: 5
//输出:
//[
//     [1],
//    [1,1],
//   [1,2,1],
//  [1,3,3,1],
// [1,4,6,4,1]
//] 
// Related Topics 数组 
// 👍 442 👎 0



//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> v(numRows);
        for (int i = 0; i < numRows; i++) {
            v[i].resize(i+1);
            v[i][0]=1;
            v[i][i]=1;
            for (int j = 1; j < i; j++) {
                v[i][j] = v[i - 1][j - 1] + v[i-1][j];
            }
        }
        return v;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


