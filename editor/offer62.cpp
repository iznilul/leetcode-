//
// Created by Administrator on 2021/2/26.
//

#include <iostream>
class Solution {
public:
    int lastRemaining(int n, int m) {
        int result = 0;
        for (int i = 2; i <= n; ++i) {
            result = (result + m) % i;
        }
        return result;
    }
};
int main(){
    Solution solution;
    printf("%d", solution.lastRemaining(5, 3));
    return 0;
}