//
// Created by Administrator on 2021/3/24.
//
#include <iostream>
#include <stack>
#include <vector>
using  namespace std;
bool compare(char item,char top){
    if(top=='(')
        return true;
    if(item=='*'||item=='/')
        if(top=='+'||top=='-')
            return true;
    return false;
}
string transfer(string s){
    stack<char> ops;
    vector<char> v;
    int len=s.length();
    string ans="";
    for(int i=0;i<len;i++){
        char c=s[i];
        if(isdigit(c))
            v.push_back(c);
        else if(c=='(')
            ops.push(c);
        else if(c=='+'||c=='-'||c=='*'||c=='/'){
            if(!ops.empty()){
                char top=ops.top();
                ops.pop();
                if(compare(c,top)){
                    ops.push(top);
                    ops.push(c);
                }else{
                    v.push_back(top);
                    ops.push(c);
                }
            }else{
                ops.push(c);
            }
        }
        else if(c==')') {
            while (!ops.empty()) {
                char top = ops.top();
                ops.pop();
                if (top != '(')
                    v.push_back(top);
                else
                    break;
            }
        }
    }
    while(!ops.empty()){
        char top=ops.top();
        ops.pop();
        v.push_back(top);
    }
    for(int i=0;i<v.size();i++){
        ans+=v[i];
    }
    return ans;
}
int calculate(string s){
    int len=s.length();
    stack<int> ans;
    int x,y;
    for(int i=0;i<len;i++){
        switch (s[i]) {
            case '+':
                x = ans.top();
                ans.pop();
                y = ans.top();
                ans.pop();
                ans.push(y + x);
                break;
            case '-':
                x = ans.top();
                ans.pop();
                y = ans.top();
                ans.pop();
                ans.push(y - x);
                break;
            case '*':
                x = ans.top();
                ans.pop();
                y = ans.top();
                ans.pop();
                ans.push(y * x);
                break;
            case '/':
                x = ans.top();
                ans.pop();
                y = ans.top();
                ans.pop();
                ans.push(y / x);
                break;
            default:
                char c=s[i];
                ans.push(c-'0');
                break;

        }
    }
    return ans.top();
}
int main(){
    printf("%d",calculate(transfer("1+2*(3-4)")));
    return 0;
}