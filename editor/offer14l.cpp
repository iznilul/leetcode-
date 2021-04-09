//
// Created by Administrator on 2021/2/8.
//
#include <iostream>
#include <math.h>
class Solution {
public:
    int cuttingRope(int n) {
        if(n<=3)
            return n-1;
        int a=n/3,b=n%3;
        if(b==1)
            return pow(3,a-1)*4;
        if(b==2)
            return pow(3,a)*2;
        return pow(3, a);
    }
};
int main(){
    Solution solution;
    printf("%d", solution.cuttingRope(10));
    return 0;
}