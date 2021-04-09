//
// Created by Administrator on 2021/2/26.
//
#include <iostream>
#include <algorithm>
using namespace std;
class Solution {
public:
    string reverseWords(string s) {
        reverse(s.begin(), s.end());
        int i = 0, start = 0;
        while(i < s.size())
        {
            if(s[i] != ' ')
            {
                if(start != 0)  s[start++] = ' ';
                int j = i, index = start;
                while(j < s.size() && s[j] != ' ')
                    s[start++] = s[j++];  //将下一个单词的元素移动到它应该在的位置
                reverse(s.begin() + index, s.begin() + start);   //翻转当前单词,index = start-(j-i)是起点
                i = j;  //更新位置
            }
            ++i;
        }
        s.erase(s.begin() + start, s.end());    //删除末尾多余元素
        return s;
    }
};
int main(){
    Solution solution;
    string s = "blue is sky the";
    string ans = solution.reverseWords(s);
    return 0;
}