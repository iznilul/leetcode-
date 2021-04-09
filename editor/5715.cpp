//
// Created by Administrator on 2021/3/28.
//
#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int reinitializePermutation(int n) {
        vector<int> vec(n), next(n);
        for(int i = 0; i < n; ++i) vec[i] = i;
        for(int i = 0; i < n; ++i){
            if(i % 2 == 0) next[i] = vec[i / 2];
            else next[i] = vec[n / 2 + (i - 1) / 2];
        }
        int ans = 0, cur = 1;
        do{
            ans++;
            cur = next[cur];
        } while(cur != 1);
        return ans;
    }
};
int main(){
    Solution solution;
    printf("%d", solution.reinitializePermutation(5));
    return 0;
}