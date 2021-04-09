//
// Created by Administrator on 2021/1/21.
//
#include <iostream>
#include <vector>
using namespace std;

int maxSubArray(vector<int>& nums) {
    vector<int> v(nums);
    int maxSize = v[0];
    for (int i = 1; i < nums.size(); ++i) {
        v[i] = max(v[i - 1] + nums[i], nums[i]);
        if(v[i]>maxSize)
            maxSize = v[i];
    }
//    for (int i = 0; i < v.size(); ++i)
//        printf("%d ", v[i]);
//    printf("\n");
    return maxSize;
}
int main(){
    vector<int> nums={-2,1,-3,4,-1,2,1,-5,4};
    int maxSize = maxSubArray(nums);
    printf("%d", maxSize);
}