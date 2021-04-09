//
// Created by Administrator on 2021/2/26.
//
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    bool isStraight(vector<int>& nums) {
        int minIndex = 0;
        sort(nums.begin(), nums.end());
        for(int i = 0; i < 4; ++i)
        {
            if(nums[i] == 0)   ++minIndex;
            else if(nums[i+1] == nums[i])  return false;
        }
        return nums[4] - nums[minIndex] < 5;   //最大的数-最小的数（除开王）< 5则是顺子
    }
};
