
//
// Created by Administrator on 2021/2/9.
//
#include <iostream>

using namespace std;
class Solution {
public:
    int hammingWeight(uint32_t n) {
        int ans=0;
        while(n!=0){
            ans++;
            n=n&(n-1);
        }
        return ans;
    }
};
int main(){
    Solution solution;
    uint32_t i;
    cin>>i;
    printf("%d", solution.hammingWeight(i));
}
