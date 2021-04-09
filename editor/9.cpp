//
// Created by Administrator on 2020/12/25.
//
#include <iostream>
using namespace std;

bool isPalindrome(int x){
    if(x<0||(x%10==0&&x))
        return false;
    int revert=0;
    while (x>revert) {
        revert=revert*10+x%10;
        x/=10;
    }
    return x == revert ||  x==revert/10;
}
int main(){
    int x = 1000030001;
//    printf("%d", isPalindrome(x));
    cout << isPalindrome(x) << endl;
    return 0;
}
