//
// Created by Administrator on 2021/3/4.
//
#include <iostream>
using namespace std;
class Solution {
public:
    int sumNums(int n) {
        int s=n;
        s && (s += sumNums(s-1));
        return s;
    }
};
int main(){
    Solution solution;
    printf("%d", solution.sumNums(4));
    return 0;
}