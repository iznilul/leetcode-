//
// Created by Administrator on 2021/2/23.
//
#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;
class Solution {
public:
//    int majorityElement(vector<int>& nums) {
//        sort(nums.begin(), nums.end());
//        return nums[nums.size() / 2];
//    }
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> map;
        int length = nums.size();
        for(int num:nums){
            map[num]++;
            if(map[num]>length/2) return num;
        }
    }
};
int main(){
    Solution solution;
    vector<int> nums={1, 2, 3, 2, 2, 2, 5, 4, 2};
    printf("%d", solution.majorityElement(nums));
    return 0;
}