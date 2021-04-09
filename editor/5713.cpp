//
// Created by Administrator on 2021/3/28.
//
#include <iostream>
#include <unordered_set>
using namespace std;
class Solution {
public:
    int numDifferentIntegers(string word) {
        int len=word.length();
        int left=0,right=0;
        int ans=0;
        unordered_set<string> set;
        while(left<len&&right<len){
            if(isalpha(word[left])){
                left++;
                continue;
            }
            if(isdigit(word[left])){
                right=left;
                string str="";
                bool flag=true;
                while(isdigit(word[right])){
                    if(word[right]=='0'&&flag){
                        right++;
                    }
                    else {
                        str += word[right];
                        right++;
                        flag=false;
                    }
                }
                str=(str.length()==0)?"0":str;
//                int number=atoi(str.c_str());
                if(set.count(str)==0){
                    set.insert(str);
                    ans++;
                }
                left=right;
            }
        }
        return ans;
    }
};
int main(){
    Solution solution;
    string word="uu717761265362523668772526716127260222200144937319826j717761265362523668772526716127260222200144937319826k717761265362523668772526716127260222200144937319826b7177612653625236687725267161272602222001449373198262hgb9utohfvfrxprqva3y5cdfdudf7zuh64mobfr6mhy17";
    printf("%d",solution.numDifferentIntegers(word));
    return 0;
}