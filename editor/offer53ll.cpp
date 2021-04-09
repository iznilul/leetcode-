//
// Created by Administrator on 2021/2/26.
//
#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int i = 0, j = nums.size() - 1;
        int m;
        while(i<=j){
            m=(i+j)/2;
            if(nums[m]==m) i=m+1;
            else j=m-1;
        }
        return i;
    }
};
int main(){
    Solution solution;
    vector<int> nums={0,1,2,3,4,6,7};
    printf("%d", solution.missingNumber(nums));
    return 0;
}
