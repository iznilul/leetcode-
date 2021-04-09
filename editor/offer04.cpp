//
// Created by Administrator on 2021/2/2.
//
#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    bool findNumberIn2DArray(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        if(n==0)
            return false;
        int m = matrix[0].size();
        if(m==0)
            return false;
        int i=0,j=m-1;
        int a = matrix[i][j];
        while (i<n&&j>=0) {
            if(a<target) {
                i++;
            }
            else if(a>target) {
                j--;
            }
            else
                return true;
            a=matrix[i][j];
        }
        return false;
    }
};
int main(){
//  vector<vector<int>> matrix={{1,4,7,11,15},{2,5,8,12,19},{3,6,9,16,22},{10,13,14,17,24},{18,21,23,26,30}};
    vector<vector<int>> matrix={{-5}};
//    printf("%d %d", matrix.size(),matrix[0].size());
  int target=-5;
  Solution solution;
  printf("%d", solution.findNumberIn2DArray(matrix, target));
    return 0;
}