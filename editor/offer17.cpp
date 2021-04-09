//
// Created by Administrator on 2021/2/9.
//
#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

class Solution {
public:
    vector<int> printNumbers(int n) {
        int sum = pow(10, n);
        vector<int> v;
        for (int i = 1; i < sum; i++)
            v.push_back(i);
        return v;
    }
};
int main(){
    Solution solution;
    vector<int> v = solution.printNumbers(3);
    return 0;
}
