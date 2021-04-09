//
// Created by Administrator on 2021/2/2.
//
#include <iostream>
using namespace std;
class Solution {
public:
    string replaceSpace(string s) {
        int length = s.length();
        int count=0;
        for(int i=0;i<length;i++){
            if(s[i]==' ')
                count++;
        }
        s.resize(length + count * 2);
        int length1=s.length();
        for(int i=length-1,j=length1-1;i>=0;i--,j--){
            if(s[i]!=' ')
                s[j] = s[i];
            else{
                s[j] = '0';
                s[j - 1] = '2';
                s[j - 2] = '%';
                j-=2;
            }
        }
        return s;
    }
};
int main(){
    Solution solution;
    string s = "We are happy.";
    string a = solution.replaceSpace(s);
    cout<<a;
}
