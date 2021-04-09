//
// Created by Administrator on 2020/12/24.
//

#include <iostream>
#include <unordered_map>

using namespace std;
#define Max 10000
int firstUniqChar(string s) {
    unordered_map<int, int> map;
    for (char c:s) {
        ++map[c];
    }
    int length = map.size();
    for (int i = 0; i < length; i++) {
        if (map[s[i]] == 1) {
            return i;
        }
    }
    return -1;
}
int main(){
    string s="leetcode";
    int i = firstUniqChar(s);
    printf("%d", i);
    return 0;
}