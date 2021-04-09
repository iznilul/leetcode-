//
// Created by Administrator on 2021/4/5.
//
#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        if(nums2.size()==0)
            return ;
        int sorted[m+n];
        int p=0,q=0;
        int cur;
        while(p<m||q<n){
            if(q<n&&(p==m||nums2[q]<nums1[p]))
                cur=nums2[q++];
            else if(p<m&&(q==n||nums2[q]>=nums1[p]))
                cur=nums1[p++];
            sorted[p+q-1]=cur;
        }
        for(int i=0;i<(m+n);i++)
            nums1[i]=sorted[i];
    }
};
int main(){
    Solution solution;
//    vector<int> num1={1,2,3,0,0,0};
//    vector<int> num2={2,4,6};
//    solution.merge(num1, 3, num2, 3);
    vector<int> num1={2,0};
    vector<int> num2={1};
    solution.merge(num1, 1, num2, 1);
    return 0;
    }