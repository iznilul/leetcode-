//
// Created by Administrator on 2021/2/2.
//
#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;
class Solution {
public:
    int findRepeatNumber(vector<int>& nums) {
        unordered_set<int> set;
        for (auto i:nums) {
            if(set.count(i)){
                return i;
            }
            set.insert(i);
        }
    }
};
int main(){
    Solution solution;
    vector<int> nums={2, 3, 1, 0, 2, 5, 3};
    printf("%d",solution.findRepeatNumber(nums));
}