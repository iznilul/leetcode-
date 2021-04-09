//
// Created by Administrator on 2021/3/26.
//
#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int height=matrix.size();
        int wide=matrix[0].size();
        int x=wide-1,y=0;
        while(x>=0&&y<height){
            if(matrix[y][x]<target)
                y++;
            else if(matrix[y][x]>target)
                x--;
            else
                return true;
        }
        return false;
    }
};
int main(){
    Solution solution;
    vector<vector<int>> v={{1,1}};
    bool ans=solution.searchMatrix(v,0);
    return 0;
}