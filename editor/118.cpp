//
// Created by Administrator on 2021/1/22.
//
#include <iostream>
#include <vector>
using namespace std;

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
int main(){
    int numRows=5;
    vector<vector<int>> v = generate(numRows);
    return 0;
}
