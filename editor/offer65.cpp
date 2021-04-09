//
// Created by Administrator on 2021/2/26.
//
#include <iostream>
#include <stdlib.h>
using namespace std;
int fact(int n)
{ if(n<2)                       //将 2 换成其它数如 8 就可输出 8 进制的结果
        return n;
    else
    { return fact(n/2)*10+n%2;                     //将二进制结果整个输出
    }
}
class Solution {
public:
    int add(int a, int b) {
        // 无进位和、进位值
        int sum, carry;
        while (b != 0) {
            // 异或操作得无进位和
            printf("%d %d\n", fact(a), fact(b));
            sum = a ^ b;
            printf("sum: %d\n", fact(sum));
            // 与操作后移位得进位值
            carry = ((unsigned int) (a & b) << 1);
            printf("carry :%d\n", fact(carry));
            // 循环，直到进位为0
            a = sum;
            b = carry;
        }
        return a;
    }
};
int main(){
    Solution solution;
    printf("%d", solution.add(24, 27));
}