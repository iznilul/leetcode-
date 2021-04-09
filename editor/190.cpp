//
// Created by Administrator on 2021/3/29.
//
#include <iostream>
#include <deque>
using namespace std;
class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t ans=0;
        for(int i=0;i<32&&n;i++){
            ans |= (n & 1) << (31 - i);
            n>>=1;
        }
        return ans;
    }
};
int main() {
    Solution solution;
    uint32_t u ;
    cin>>u;
    printf("%u", solution.reverseBits(u));
}