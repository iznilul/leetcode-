//
// Created by Administrator on 2021/3/4.
//
#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int maxValue(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size();
        vector<vector<int> > dp(m, vector<int>(n, 0));
        dp[0][0] = grid[0][0];
        for(int i = 1; i < m; ++i)
            dp[i][0] += dp[i-1][0] + grid[i][0];
        for(int j = 1; j < n; ++j)
            dp[0][j] += dp[0][j-1] + grid[0][j];     //初始化第一列和第一行

        for(int i = 1; i < m; ++i)
            for(int j = 1; j < n; ++j)
                dp[i][j] = max(dp[i][j-1], dp[i-1][j]) + grid[i][j];

        return dp[m-1][n-1];
    }
};
int main(){
    vector<vector<int>> grid={{1,3,1},{1,5,1},{4,2,1}};
    Solution solution;
    printf("%d", solution.maxValue(grid));
    return 0;
}