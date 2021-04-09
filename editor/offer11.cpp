//
// Created by Administrator on 2021/2/5.
//
#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int minArray(vector<int>& numbers) {
        int length=numbers.size();
        int left=0,right=length-1,mid;
        while(left<right){
            mid=left+(right-left)/2;
            if(numbers[right]>numbers[mid]){
                right=mid;
            }else if(numbers[mid]>numbers[right]){
                left=mid+1;
            }
            else{
                right--;
            }
        }
        return numbers[left];
    }
};
int main(){
    Solution solution;
    vector<int> numbers={3,4,5};
    printf("%d", solution.minArray(numbers));
    return 0;
}