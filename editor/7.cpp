//
// Created by Administrator on 2021/3/27.
//
#include <iostream>
#include <climits>
using namespace std;
class Solution {
public:
    int reverse(int x){
        int ans=0;
        int result;
        while(x!=0){
            result=x%10;
            if(ans>INT_MAX/10||(ans==INT_MAX/10&&result>7))
                return 0;
            if(ans<INT_MIN/10||(ans==INT_MIN/10&&result<-8))
                return 0;
            ans=ans*10+result;
            x/=10;
        }
        return ans;
    }
};
int main(){
    printf("%d", reverse(1534236469));
    return 0;
    }