//
// Created by Administrator on 2021/2/13.
//
#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int width=matrix.size();
        int length = matrix[0].size();
        int count=width*length;
        int i=0,j=0,k=0,a;
        int up=0,left=0,down=width-1,right=length-1;
        while(k<count){
            for(j=left;j<=right&k<count;j++){
                a=matrix[i][j];
                ans.push_back(a);
                k++;
            }
            j=right;
            up++;
            for(i=up;i<=down&k<count;i++){
                a=matrix[i][j];
                ans.push_back(a);
                k++;
            }
            i=down;
            right--;
            for(j=right;j>=left&k<count;j--){
                a=matrix[i][j];
                ans.push_back(a);
                k++;
            }
            j=left;
            down--;
            for(i=down;i>=up&k<count;i--){
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
int main(){
    Solution solution;
    vector<int> ans;
    vector<vector<int>> matrix={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    ans = solution.spiralOrder(matrix);
    return 0;
}