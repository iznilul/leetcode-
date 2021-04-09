//
// Created by Administrator on 2021/3/4.
//
#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    vector<int> singleNumbers(vector<int>& nums) {
        int ret = 0;
        for (int n : nums)
            ret ^= n;
        int div = 1;
        while ((div & ret) == 0)
            div <<= 1;
        int a = 0, b = 0;
        for (int n : nums)
            if (div & n)
                a ^= n;
            else
                b ^= n;
        return vector<int>{a, b};
    }
};
int main(){
    Solution solution;
    vector<int> nums={1,2,10,4,1,4,3,3};
    vector<int> ans = solution.singleNumbers(nums);
    return 0;
}
