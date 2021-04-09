//
// Created by Administrator on 2021/3/4.
//
#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    void quickSort(vector<string>& strs, int left, int right) {
        if (left >= right) return;
        int l = left;
        int r = right;
        string pivot = strs[left];
        while (l < r) {
            while (l < r && strs[r] + pivot >= pivot + strs[r]) r--; //右哨兵找小的
            while (l < r && strs[l] + pivot <= pivot + strs[l]) l++; //左哨兵找大的
            if (l < r) swap(strs[l], strs[r]);
        }
        swap(strs[l], strs[left]);
        quickSort(strs, left, l - 1);
        quickSort(strs, l + 1, right);
    }
    string minNumber(vector<int>& nums) {
        vector<string> strs;
        for (int num : nums) strs.push_back(to_string(num));
        quickSort(strs, 0, strs.size() - 1);
        string ans;
        for (string str : strs) ans += str;
        return ans;
    }
};
int main(){
    Solution solution;
    vector<int> v = {3, 30, 34, 5, 9};
    string ans = solution.minNumber(v);
    return 0;
}