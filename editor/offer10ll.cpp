//
// Created by Administrator on 2021/2/5.
//
#include <iostream>
using namespace std;
class Solution {
public:
//    int numWays(int n) {
//        if(n==1||n==0)
//            return 1;
//        if(n==2)
//            return 2;
//        return numWays(n - 1) + numWays(n - 2)%1000000007;
//    }
    int numWays(int n){
        int a=1,b=1,sum;
        for(int i=0;i<n;i++){
            sum=(a+b)%1000000007;
            a=b;
            b=sum;
        }
        return a;
}
};
int main(){
    Solution solution;
    printf("%d", solution.numWays(7));
}