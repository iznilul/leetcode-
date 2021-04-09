//
// Created by Administrator on 2021/4/6.
//
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        unordered_map<int,int> map;
        int len=nums.size();
        for(int i=0;i<len;i++){
            if(map[nums[i]]<2){
                map[nums[i]]++;
            }else{
                nums.erase(nums.begin()+i);
                i--;
                len--;
            }
        }
        return len;
    }
};
int main(){
    Solution solution;
    vector<int> nums={0,0,1,1,1,1,2,3,3};
    printf("%d", solution.removeDuplicates(nums));
    return 0;
}