//
// Created by Administrator on 2021/3/17.
//
#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    void dfs(vector<vector<char>>& grid,int wide,int len,int i,int j){
        grid[i][j]='0';
        if(i-1>=0&&grid[i-1][j]=='1') dfs(grid,wide,len,i-1,j);
        if(i+1<wide&&grid[i+1][j]=='1') dfs(grid,wide,len,i+1,j);
        if(j-1>=0&&grid[i][j-1]=='1') dfs(grid,wide,len,i,j-1);
        if(j+1<len&&grid[i][j+1]=='1') dfs(grid,wide,len,i,j+1);
    }
    int numIslands(vector<vector<char>>& grid) {
        int wide=grid.size();
        if(!wide)
            return 0;
        int len=grid[0].size();
        int count=0;
        for(int i=0;i<wide;i++)
            for(int j=0;j<len;j++){
                if(grid[i][j]=='1'){
                    count++;
                    dfs(grid,wide,len,i,j);
                }
            }
        return count;
    }
};
