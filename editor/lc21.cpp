//
// Created by Administrator on 2021/4/5.
//
#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;
class Solution {
public:
    int purchasePlans(vector<int>& nums, int target) {
        int len=nums.size();
        vector<int> v(len,0);
        sort(nums.begin(),nums.end());
        int ans=0;
        int min;

        return ans%1000000007;
    }
};
int main(){
    Solution solution;
    vector<int> nums={2,2,3,5};
    printf("%d", solution.purchasePlans(nums, 6));
    return 0;
}
//class Solution {
//public:
//    int orchestraLayout(int num, int xPos, int yPos) {
//        vector<vector<int>> nums(num,vector<int>(num));
//        int count=num*num;
//        int k=1;
//        int up=0,left=0,right=num-1,down=num-1;
//        int i=0,j=0;
//        while(k<=count){
//            for(j=left;j<=right&&k<=count;j++){
//                nums[i][j]=k%9;
//                k++;
//            }
//            up++;
//            j=right;
//            for(i=up;i<=down&&k<=count;i++){
//                nums[i][j]=k%9;
//                k++;
//            }
//            right--;
//            i=down;
//            for(j=right;j>=left&&k<=count;j--){
//                nums[i][j]=k%9;
//                k++;
//            }
//            down--;
//            j=left;
//            for(i=down;i>=up&&k<=count;i--){
//                nums[i][j]=k%9;
//                k++;
//            }
//            left++;
//            i=up;
//        }
//        return nums[xPos][yPos];
//    }
//};
//int main(){
//    Solution solution;
//    printf("%d", solution.orchestraLayout(3, 0, 2));
//    return 0;
//}
