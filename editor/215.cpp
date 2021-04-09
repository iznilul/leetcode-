//
// Created by Administrator on 2021/3/5.
//
#include <iostream>
#include <vector>
#include <time.h>
using namespace std;
class Solution {
public:
    void quickSort(vector<int>& nums,int left,int right){
        if(left>=right)
            return ;
        int pivot=nums[left];
        int i=left,j=right;
        while(i<j){
            while(i<j&&nums[j]>=pivot)
                j--;
            if(i<j)
                swap(nums[i],nums[j]);
            while(i<j&&nums[i]<=pivot)
                i++;
            if(i<j)
                swap(nums[i],nums[j]);
        }
        quickSort(nums,left,i-1);
        quickSort(nums,i+1,right);
    }
    int findKthLargest(vector<int>& nums, int k) {
        quickSort(nums,0,nums.size()-1);
        return nums[nums.size()-k];
    }
};
int main(){
    Solution solution;
    vector<int> nums={3,2,1,5,6,4};
    printf("%d", solution.findKthLargest(nums, 2));
    return 0;
}

