//
// Created by Administrator on 2021/2/26.
//
#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int helper(vector<int> nums, int tar) {
        int i = 0, j = nums.size() - 1;
        while(i <= j) {
            int m = (i + j) / 2;
            if(nums[m] <= tar) i = m + 1;
            else j = m-1 ;
        }
        return i;
    }
    int search(vector<int>& nums, int target) {
            return helper(nums, target) - helper(nums, target - 1);
        }
};
int main(){
    Solution solution;
    vector<int> nums={5,7,7,8,8,10};
    printf("%d", solution.search(nums, 8));
    return 0;
}
