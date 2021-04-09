//
// Created by Administrator on 2021/2/23.
//
#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        vector<int> v(nums);
        int length = nums.size();
        int Max = nums[0];
        for(int i=1;i<length;i++){
            v[i] = max(v[i - 1] + nums[i], nums[i]);
            if(v[i]>Max)
                Max = v[i];
        }
        return Max;
    }
};
int main(){
    Solution solution;
    vector<int> nums={-2,1,-3,4,-1,2,1,-5,4};
    printf("%d", solution.maxSubArray(nums));
    return 0;
}