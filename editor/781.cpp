//
// Created by Administrator on 2021/4/5.
//
#include <iostream>
#include<vector>
#include <unordered_map>
using namespace std;
class Solution {
public:
    int numRabbits(vector<int> &answers) {
        unordered_map<int, int> count;
        for (int y : answers) {
            ++count[y];
        }
        int ans = 0;
        for (auto &[y, x] : count) {
            ans += (x + y) / (y + 1) * (y + 1);
        }
        return ans;
    }
};
int main(){
    Solution solution;
    vector<int> nums={5,5,5,5,5,5,5,5,5,5,5,5};
    printf("%d", solution.numRabbits(nums));
    return 0;
}