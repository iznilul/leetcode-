//
// Created by Administrator on 2021/3/28.
//
#include <iostream>
#include <vector>
#include <cstring>
#include <unordered_map>
using namespace std;
class Solution {
    unordered_map<string,string> map;
public:
    void transfer(vector<vector<string>>& knowledge) {
        int len = knowledge.size();
        if (len == 0)
            return;
        for(int i=0;i<len;i++){
            map[knowledge[i][0]] = knowledge[i][1];
        }
    }
    string evaluate(string s, vector<vector<string>>& knowledge) {
        transfer(knowledge);
        int len=s.length();
        int left=0,right=0;
        string ans="";
        while(left<len&&right<len){
            if(s[left]!='('){
                left++;
                continue;
            }else{
                ans+=s.substr(right,left-right);
                left++;
                right=left;
                while(s[right]!=')'){
                    right++;
                }
                string str=s.substr(left,right-left);
                if(map.count(str)){
                    ans+=map[str];
                }else{
                    ans+='?';
                }
                right++;
                left=right;
            }
        }
        ans+=s.substr(right,left-right);
        return ans;
    }
};
int main(){
    Solution solution;
    string s="(name)is(age)yearsold";
    vector<vector<string>> knowledge={{"name","bob"},{"age","two"}};
    string ans = solution.evaluate(s, knowledge);
    return 0;
}