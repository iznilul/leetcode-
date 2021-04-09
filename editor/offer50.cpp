//
// Created by Administrator on 2021/2/26.
//
#include <iostream>
#include <unordered_map>
using namespace std;
class Solution {
public:
    char firstUniqChar(string s) {
        unordered_map<char,int> map;
        for(char c:s){
            map[c]++;
        }
        for(char c:s)
            if(map[c]==1)
                return c;
        return ' ';
    }
};
int main(){
    Solution solution;
    string s = "aadadaad";
    printf("%c", solution.firstUniqChar(s));
    return 0;
}