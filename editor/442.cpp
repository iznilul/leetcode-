//
// Created by Administrator on 2021/3/5.
//
#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {

        vector<int>result;
        int m = nums.size();
        if(m == 0) return result;
        for(int i = 0; i < m; i++)
        {
            int num = abs(nums[i]);
            if(nums[num - 1] > 0)
                nums[num - 1] *=(-1);
            else result.push_back(num);
        }

        return result;
    }
};
int main(){
    Solution solution;
    vector<int> nums={4,3,2,7,8,2,3,1};
    vector<int> ans = solution.findDuplicates(nums);
    return 0;
}
