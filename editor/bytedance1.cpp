//
// Created by Administrator on 2021/3/5.
//
#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {

        vector<int>result;
        int m = nums.size();
        if(m == 0) return result;
        for(int i = 0; i < m; i++)
        {
            int num = nums[i]%m;
            nums[num]+=m;
        }
        for(auto num:nums){
            result.push_back(num/m);
        }
        return result;
    }

int heightDifference(vector<int> nums){
    int n = nums.size();
    sort(nums.begin(), nums.end());
    int a = nums[1] - nums[0];
    int b = nums[n - 1] - nums[n - 2];
    int maxVal = max(a, b);
    for (int i = 0; i<n - 2; i++){
        int c = nums[i + 2] - nums[i];
        maxVal = max(maxVal, c);
    }
    return maxVal;
}
};
int main(){
    Solution solution;
    vector<int> nums={4,3,2,7,8,2,3,1};
//    vector<int> nums={100,150,200,250};
    vector<int> ans = solution.findDuplicates(nums);
//    printf("%d", solution.heightDifference(nums));
    return 0;
}