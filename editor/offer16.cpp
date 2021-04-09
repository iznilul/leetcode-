//
// Created by Administrator on 2021/2/9.
//
#include <iostream>
using namespace std;
class Solution {
public:
    double myPow(double x, int n) {
        double ans=1;
        long a=n;
        if(x==0)
            return 0;
        if(a==0||x==1)
            return ans;
        if(a<0) {
            x = 1 / x;
            a=-a;
        }
        while(a>0){
            if((a&1)==1)
                ans*=x;
            x*=x;
            a=a>>1;
        }
        return ans;
    }
};
int main(){
    Solution solution;
    double x=2.0;
    int n=-2147483648;
    printf("%f", solution.myPow(x, n));
}