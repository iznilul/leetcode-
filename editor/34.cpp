//
// Created by Administrator on 2021/4/9.
//
#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int len=nums.size();
        int left=0,right=len-1;
        vector<int> ans(2,-1);
        while(left<=right){
            int mid=(left+right)/2;
            if(nums[mid]<target)
                left=mid+1;
            else if(nums[mid]>target)
                right=mid-1;
            else{
                int cur=mid;
                while(cur-1>=0&&nums[cur]==nums[cur-1]){
                    cur--;
                }
                ans[0]=cur;
                cur=mid;
                while(cur+1<len&&nums[cur]==nums[cur+1]){
                    cur++;
                }
                ans[1]=cur;
                break;
            }
        }
        return ans;
    }
};
int main(){
    Solution solution;
    vector<int> nums={5,7,7,8,8,10};
    vector<int> ans = solution.searchRange(nums, 8);
    return 0;
}