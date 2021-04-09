//
// Created by Administrator on 2020/12/24.
//
#include <stdio.h>
#include <stdbool.h>
int isPalindrome(int x){
    if(x<0)
        return 0;
    if(x==0)
        return 1;
    int a[10]={0};
    int count=0;
    for (; x; x /= 10,count++) {
        a[count]=x%10;
    }
    count--;
    int length = count;
    for (int i = 0; i <= length / 2; i++) {
        printf("%d %d\n", a[i], a[count]);
        if(a[i]!=a[count])
            return 0;
        count--;
    }
    return 1;
}
int main(){
    int x = 1000030001;
    printf("%d", isPalindrome(x));
    return 0;
}