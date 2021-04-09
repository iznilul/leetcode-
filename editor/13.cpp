//
// Created by Administrator on 2021/1/25.
//
#include <iostream>
#include <unordered_map>
#include <cstring>

using namespace std;


class Solution {
public:
    unordered_map<char,int> charMap;
    unordered_map<string,int> stringMap;
    int sum;
    Solution(){
        charMap.insert({{'I', 1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}});
        stringMap.insert({{"IV", 4},{"IX", 9},{"XL", 40},{"XC", 90},{"CD", 400},{"CM", 900}});
        sum=0;
    }
    int romanToInt(string s) {
        int length = s.length();
        char single = s[0];
        if(length==1){
            sum += charMap.at(single);
            return sum;
        }
        string db = s.substr(0, 2);
        if(stringMap.find(db)!=stringMap.end()) {
            sum += stringMap.at(db);
            if(length==2)
                return sum;
            romanToInt(s.substr(2));
        } else {
            sum += charMap.at(single);
            romanToInt(s.substr(1));
        }
        return sum;
    }
};
int main(){
    Solution solution;
    string s = "MCMXCIV";
    int sum = solution.romanToInt(s);
    printf("%d", sum);
    return 0;
}
