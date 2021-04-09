//
// Created by Administrator on 2021/1/21.
//
#include <iostream>
#include <unordered_set>
#include <cstring>


using namespace std;
int lengthOfLongestSubstring(char* s){
    int length=strlen(s);
    int window=-1,maxLength=0;
    unordered_set<char> set;
    for (int i = 0; i < length; i++) {
        if(i!=0)
            set.erase(s[i - 1]);
        while(window+1<length&&!set.count(s[window+1])) {
            set.insert(s[window + 1]);
            window++;
        }
        maxLength = max(maxLength, window - i + 1);
    }
    return maxLength;
}
int main(){
    char s[50000];
    strcpy(s, "abcabcbb");
    int length;
    length = lengthOfLongestSubstring(s);
    printf("%d", length);
}
