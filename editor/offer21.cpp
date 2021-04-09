//
// Created by Administrator on 2021/2/12.
//
#include <iostream>
#include <queue>
#include <vector>
using namespace std;
class Solution {
public:
    vector<int> exchange(vector<int>& nums) {
        int length = nums.size();
        if(length==1)
            return nums;
        queue<int> q1;
        queue<int> q2;
        vector<int> ans;
        for(int i=0;i<length;i++){
            if(nums[i]%2!=0)
                q1.push(nums[i]);
            else
                q2.push(nums[i]);
        }
        while(!q1.empty()){
            ans.push_back(q1.front());
            q1.pop();
        }
        while(!q2.empty()){
            ans.push_back(q2.front());
            q2.pop();
        }
        return ans;
    }
};
int main(){
    Solution solution;
    vector<int> nums={1,2,3,4};
    vector<int> ans = solution.exchange(nums);
    return 0;
}