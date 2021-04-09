//
// Created by Administrator on 2021/3/23.
//
#include <iostream>
#include <vector>
#include <numeric>
#include <stack>
using namespace std;
class Solution {
public:
    int calculate(string s) {
        vector<int> stk;
        stack<char> opr;
//        char preSign = '+';
        opr.push('+');
        int num = 0;
        int n = s.length();
        for (int i = 0; i < n; ++i) {
            if (isdigit(s[i])) {
                num = num * 10 + int(s[i] - '0');
            }
            if (!isdigit(s[i]) && s[i] != ' ' || i == n - 1) {
                switch (opr.top()) {
                    case '+':
                        stk.push_back(num);
                        break;
                    case '-':
                        stk.push_back(-num);
                        break;
                    case '*':
                        stk.back() *= num;
                        break;
                    case '/':
                        stk.back() /= num;
                        break;
                    case '(':

                }
                opr.push(s[i]);
                num = 0;
            }
        }
        return accumulate(stk.begin(), stk.end(), 0);
    }
};
int main(){
    Solution solution;
    string s="1*2-3/4+5*6-7*8+9/10";
    printf("%d", solution.calculate(s));
    return 0;
}