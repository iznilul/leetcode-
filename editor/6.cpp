//
// Created by Administrator on 2021/1/22.
//
#include <iostream>
#include <vector>
using namespace std;
string convert(string s, int numRows) {
    int length = s.size();
    if(length==1)
        return s;
    vector<string> v(min(numRows,length));
    string ans;
    int curWin=0;
    bool down=false;
    for (char c:s) {
        v[curWin]+=c;
        if(curWin==0||curWin==numRows-1)
            down = !down;
        curWin+=down?1:-1;
    }
    length = v.size();
    for (int i = 0; i < length; i++)
        ans += v[i];
    return ans;
}
int main(){
    string s = "AB";
    int numRows=4;
    string ans = convert(s, numRows);
    printf("%s", ans.c_str());
}
