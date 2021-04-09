//
// Created by Administrator on 2021/3/4.
//

#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int map[128] = {0}, len = 0, start = 0;  //map统计字符在当前子串出现次数,字符的ascii码值小于128
        for(int i = 0; i < s.size(); ++i)
        {
            ++map[s[i]];
            while(map[s[i]] == 2)   //出现重复
                --map[s[start++]];  //不断滑动右移的同时恢复map中的状态，当map[s[i]]=1时，确定新的start
            len = max(len, i - start + 1);
        }
        return len;
    }
};