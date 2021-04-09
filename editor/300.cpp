//
// Created by Administrator on 2021/3/18.
//
#include <iostream>
#include <vector>
using namespace std;
class Solution {
    int maxLength=0;
public:
    int lengthOfLIS(vector<int>& nums) {
        int len=nums.size();
        if(len<=1)
            return len;
        vector<int> dp(len,1);
        for(int i=1;i<len;i++)
            for(int j=i;j>=0;j--){
                if(nums[i]>nums[j])
                    dp[i]=max(dp[i],dp[j]+1);
                maxLength=max(dp[i],maxLength);
            }
        return maxLength;
    }
};
int main(){
    Solution solution;
    vector<int> nums={0,1,0,3,2,3};
    int ans=solution.lengthOfLIS(nums);
    return 0;
}