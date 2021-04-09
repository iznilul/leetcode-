//
// Created by Administrator on 2021/3/27.
//
#include <iostream>
using namespace std;
class Solution {
public:
    bool isPalindrome(string s) {
        int len=s.length();
        int left=0,right=len-1;
        bool l=false,r=false;
        while(left<right){
            if(isdigit(s[left])||isalpha(s[left])){
                l=true;
            }
            else{
                left++;
            }
            if(isdigit(s[right])||isalpha(s[right])){
                r=true;
            }
            else{
                right--;
            }
            if(l&&r){
                if(tolower(s[left])!=tolower(s[right]))
                    return false;
                else{
                    left++;
                    right--;
                    l=false;
                    r=false;
                }
            }
        }
        return true;
    }
};
int main(){
    Solution solution;
    printf("%d", solution.isPalindrome("ab_a"));
//    printf("%d", tolower(3));
    return 0;
}