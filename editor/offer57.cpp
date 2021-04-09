//
// Created by Administrator on 2021/2/26.
//
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int length = nums.size();
        int i=0,j=length-1,s;
        while(i<j){
            s = nums[i] + nums[j];
            if(s>target) j--;
            else if(s<target) i++;
            else return {nums[i], nums[j]};
        }
        return {};
    }
};