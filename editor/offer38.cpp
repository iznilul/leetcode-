//
// Created by Administrator on 2021/2/19.
//
#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;
class Solution {
public:
    void recur(vector<string> &ans,string &s,int depth){
        int length = s.size();
        if(depth>=length-1){
            ans.push_back(s);
            return;
        }
        unordered_set<char> used;
        for(int i=depth;i<length;i++){
            if(used.find(s[i])!=used.end())
                continue;
            used.insert(s[i]);
            swap(s[depth], s[i]);
            recur(ans, s, depth+1);
            swap(s[i], s[depth]);
        }
    }
    vector<string> permutation(string s) {
        vector<string> ans;
        int depth=0;
        recur(ans,s,depth);
        return ans;
    }
};
int main(){
    Solution solution;
    vector<string> ans;
    ans = solution.permutation("abc");
    return 0;
}
