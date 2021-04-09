//
// Created by Administrator on 2021/1/21.
//
#include <iostream>
using namespace std;

#include <vector>
//bool palindrome(string s, int i, int j){
//    while(i<j) {
//        if (s[i] == s[j]) {
//            ++i;
//            --j;
//        } else {
//            return false;
//        }
//    }
//    return true;
//}
//string longestPalindrome(string s) {
//    int length=s.size();
//    if(length==1)
//        return s;
//    string ans=s.substr(0,1);
//    int maxlen=1;
//    for (int i = 0; i < length - 1; ++i) {
//        for (int j = i + 1; j < length; ++j) {
//            if(palindrome(s,i,j)&&j-i+1>maxlen) {
//                maxlen=j-i+1;
//                ans = s.substr(i, maxlen);
//            }
//        }
//    }
//    return ans;
//}
string longestPalindrome(string s) {
    int length=s.size();
    if(length<2)
        return s;
    int maxlen=1;
    string ans = s.substr(0, 1);
    vector<vector<bool>> dp(length, vector<bool>(length));
    for (int j = 1; j < length; j++) {
        for (int i=0; i< j; i++) {
            if(s[i]==s[j]) {
                if (j - i < 3)
                    dp[i][j] = true;
                else
                    dp[i][j] = dp[i+1][j - 1];
            }
            if(dp[i][j]&&j-i+1>maxlen) {
                maxlen=j-i+1;
                ans = s.substr(i, maxlen);
            }
        }
    }
    return ans;
}
int main(){
    string s = "aaaa";
    string ans = longestPalindrome(s);
    printf("%s", ans.c_str());
}
