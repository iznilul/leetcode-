//
// Created by Administrator on 2021/2/26.
//
#include <iostream>
#include <vector>
#include <deque>

using namespace std;
class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> res;
        deque<int> dq;      //队列存放的是数组的索引
        int length = nums.size();
        for(int i = 0; i < length; ++i)
        {
            while(!dq.empty() && nums[dq.back()] < nums[i])
                dq.pop_back();  //维护队列由大到小的单调性
            dq.push_back(i);
            if(i >= k-1)
            {
                res.push_back(nums[dq.front()]);
                if(i - k + 1 == dq.front())
                    dq.pop_front(); //如果最大值正好是窗口的第一个位置，弹出
            }
        }
        return res;
    }
};
int main(){
    Solution solution;
    vector<int> nums={1,3,-1,-3,5,3,6,7};
    vector<int> ans = solution.maxSlidingWindow(nums, 3);
    return 0;
}