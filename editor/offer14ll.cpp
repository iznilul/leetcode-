//
// Created by Administrator on 2021/2/9.
//
#include <iostream>
#include <math.h>
using namespace std;
class Solution {
public:
    int cuttingRope(int n) {
        if(n<=3)
            return n-1;
        int a=n/3,b=n%3;
        long i=1;
        for(int x=1;x<a;x++){
            i*=3;
            i%=1000000007;
        }
        if(b==1)
            return (i*4)%1000000007;
        if(b==2)
            return (i * 6) % 1000000007;
        return (i*3)%1000000007;
    }
};
int main(){
    Solution solution;
    printf("%d", solution.cuttingRope(100));
}
