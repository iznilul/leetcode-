//
// Created by Administrator on 2021/3/16.
//
#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        if(matrix.size()==1)
            return matrix[0];
        vector<int> ans;
        int wide=matrix.size();
        int len=matrix[0].size();
        int left=0,right=len-1,up=0,down=wide-1;
        int i=0,j=0;
        while(left<=right&&up<=down){
            for(i=up,j=left;j<=right;j++)
                ans.push_back(matrix[i][j]);
            up++;
            if(up>down) break;
            for(i=up,j=right;i<=down;i++)
                ans.push_back(matrix[i][j]);
            right--;
            if(left>right) break;
            for(i=down,j=right;j>=left;j--)
                ans.push_back(matrix[i][j]);
            down--;
            if(up>down) break;
            for(i=down,j=left;i>=up;i--)
                ans.push_back(matrix[i][j]);
            left++;
        }
        return ans;
    }
};
int main(){
    Solution solution;
    vector<vector<int>> matrix={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    vector<int> ans = solution.spiralOrder(matrix);
    return 0;
}