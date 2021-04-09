//
// Created by Administrator on 2021/3/4.
//
#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;
class AutoMac{
    string state = "start";
    unordered_map<string, vector<string>> table = {
            {"start", {"start", "signed", "in_number", "end"}},
            {"signed", {"end", "end", "in_number", "end"}},
            {"in_number", {"end", "end", "in_number", "end"}},
            {"end", {"end", "end", "end", "end"}}
    };
    int getState(char c){
        if(isspace(c))return 0;
        else if(c=='+'||c=='-')return 1;
        else if(isdigit(c)) return 2;
        return 3;
    }
public:
    int sign=1;
    long long ans=0;
    void get(char c){
        state = table[state][getState(c)];
        if(state=="in_number"){
            ans=ans*10+c-'0';
            ans = sign == 1 ? min(ans, (long long)INT_MAX) : min(ans, -(long long)INT_MIN);
        }else if(state=="signed"){
            sign=c=='+'?1:-1;
        }
    }
};
class Solution {
public:
    int myAtoi(string s) {
        AutoMac autoMac;
        for(char c:s)
            autoMac.get(c);
        return autoMac.ans * autoMac.sign;
    }
};
int main(){
    Solution solution;
    string s = "-91283472332";
    int result = solution.myAtoi(s);
    printf("%d", result);
    return 0;
}