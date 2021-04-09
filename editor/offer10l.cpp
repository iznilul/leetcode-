//
// Created by Administrator on 2021/2/1.
//
#include <iostream>
class Solution {
public:
    int fib(int n) {
        if(n==1||n==0)
            return n;
        return fib(n - 1) + fib(n - 2);
    }
};
int main(){
    Solution solution;
    printf("%d", solution.fib(5));
    return 0;
}