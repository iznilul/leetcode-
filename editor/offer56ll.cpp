//
// Created by Administrator on 2021/3/4.
//
#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int bits[32] = {0}, res = 0;      //存放各位1出现的次数
        for(int num : nums)     //统计二进制位
        {
            for(int i = 31; i >= 0; --i)
            {
                bits[i] += num & 1;
                num >>= 1;
            }
        }
        for(int n : bits)       //还原
        {
            res <<= 1;
            res += n % 3;   //n % 3表示目标数字的二进制位，因为其他数字都是3的倍数次数出现的
        }
        return res;
    }
};
