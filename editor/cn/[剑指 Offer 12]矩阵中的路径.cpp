//请设计一个函数，用来判断在一个矩阵中是否存在一条包含某字符串所有字符的路径。路径可以从矩阵中的任意一格开始，每一步可以在矩阵中向左、右、上、下移动一格。如果
//一条路径经过了矩阵的某一格，那么该路径不能再次进入该格子。例如，在下面的3×4的矩阵中包含一条字符串“bfce”的路径（路径中的字母用加粗标出）。 
//
// [["a","b","c","e"], 
//["s","f","c","s"], 
//["a","d","e","e"]] 
//
// 但矩阵中不包含字符串“abfb”的路径，因为字符串的第一个字符b占据了矩阵中的第一行第二个格子之后，路径不能再次进入这个格子。 
//
// 
//
// 示例 1： 
//
// 
//输入：board = [["A","B","C","E"],["S","F","C","S"],["A","D","E","E"]], word = "AB
//CCED"
//输出：true
// 
//
// 示例 2： 
//
// 
//输入：board = [["a","b"],["c","d"]], word = "abcd"
//输出：false
// 
//
// 
//
// 提示： 
//
// 
// 1 <= board.length <= 200 
// 1 <= board[i].length <= 200 
// 
//
// 注意：本题与主站 79 题相同：https://leetcode-cn.com/problems/word-search/ 
// Related Topics 深度优先搜索 
// 👍 237 👎 0



//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
    int rows,col;
public:
    bool exist(vector<vector<char>>& board, string word) {
        rows = board.size();
        col=board[0].size();
        for(int i=0;i<rows;i++)
            for(int j=0;j<col;j++){
                if(dfs(board,word,i,j,0))
                    return true;
            }
        return false;
    }

private:
    bool dfs(vector<vector<char>>& board,string word,int i,int j,int k){
        if(i<0||i>=rows||j<0||j>=col||board[i][j]!=word[k])
            return false;
        if(k==word.size()-1)
            return true;
        board[i][j] = '\0';
        bool res = (dfs(board, word, i + 1, j, k + 1) || dfs(board, word, i - 1, j, k + 1) ||
                    dfs(board, word, i , j+1, k + 1) || dfs(board, word, i , j-1, k + 1));
        board[i][j] = word[k];
        return res;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


