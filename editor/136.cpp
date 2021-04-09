//
// Created by Administrator on 2021/3/27.
//
#include <vector>
#include <iostream>
using namespace std;
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans=0;
        for(int num:nums){
            ans^=num;
        }
        return ans;
    }
};
int main(){
    vector<int> v={2,2,1};
    Solution solution;
    printf("%d", solution.singleNumber(v));
    return 0;
}