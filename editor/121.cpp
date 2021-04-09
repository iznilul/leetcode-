//
// Created by Administrator on 2021/3/14.
//
#include <iostream>
#include <vector>
#include <stack>
#include <limits.h>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit=0;
        stack<int> s;
        s.push(INT_MAX);
        for(int price:prices){
            if(s.top()<price){
                maxProfit=max(maxProfit,price-s.top());
            }else{
            s.pop();
            s.push(price);
            }
        }
        return maxProfit;
    }
};
int main(){
    Solution solution;
    vector<int> v={7,1,5,3,6,4};
    int ans = solution.maxProfit(v);
    return 0;
}