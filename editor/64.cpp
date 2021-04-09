//
// Created by Administrator on 2021/3/28.
//
#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int len=grid.size();
        int wide=grid[0].size();
        if(len==1)
            return wide;
        // vector<vector<int>> ans(len,vector<int>(wide,0));
        for(int i=1;i<len;i++)
            grid[i][0]+=grid[i-1][0];
        for(int i=1;i<wide;i++)
            grid[0][i]+=grid[0][i-1];
        for(int i=1;i<len;i++)
            for(int j=1;j<wide;j++){
                grid[i][j]+=min(grid[i-1][j],grid[i][j-1]);
            }
        return grid[len-1][wide-1];
    }
};
int main(){
    vector<vector<int>> grid={{1,3,1},{1,5,1},{4,2,1}};
    Solution solution;
    printf("%d", solution.minPathSum(grid));
    return 0;
}
