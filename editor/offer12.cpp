//
// Created by Administrator on 2021/2/6.
//
#include <iostream>
#include <vector>
using namespace std;

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
int main(){
    Solution solution;
    vector<vector<char>> board = {{'A', 'B', 'C', 'E'},
                                  {'S', 'F', 'C', 'S'},
                                  {'A', 'D', 'E', 'E'}};
    string word = "ABCCED";
    printf("%d", solution.exist(board, word));
    return 0;
}