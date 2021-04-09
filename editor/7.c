//
// Created by Administrator on 2020/12/24.
//
#include <stdio.h>
#include <limits.h>
#include <io.h>

int reverse(int x){
    int temp,pop,ret=0;
    while(x!=0) {
        pop=x%10;
        temp = ret * 10 + pop;
        if((temp-pop)/10!=ret)
            return 0;
        ret=temp;
        x/=10;
    }
    return ret;
}
int main(){
    int x;
    scanf("%d", &x);
    printf("%d\n", reverse(x));
    printf("%d\n", INT_MAX);
    printf("%d\n", INT_MIN);
//    write(1, "hello,world\n", 13);

}
