//
// Created by Administrator on 2020/12/26.
//
#include <stdio.h>
#include <stdlib.h>
int cmp(const void *a,const void *b){
    return *(int *)a-*(int *)b;
}

int findContentChildren(int* g, int gSize, int* s, int sSize){
    qsort(g, gSize, sizeof(int), cmp);
    qsort(s, sSize, sizeof(int), cmp);
    int count=0;
    for(int i=0,j=0;i<gSize&&j<sSize;i++,j++){
        while (j<sSize&&g[i] > s[j]) {
            j++;
        }
        if(j<sSize)
            count++;
    }
    return count;
//    for (int i = 0; i < gSize; i++)
//        printf("%d\n", *(g + i));
//    for (int i = 0; i < sSize; i++)
//        printf("%d\n", *(s + i));
}
int main(){
    int g[]={3,2,1};
    int s[]={2,1};
    int gSize = sizeof(g) / sizeof(int);
    int sSize = sizeof(s) / sizeof(int);
    int d=findContentChildren(g, gSize, s, sSize);
    printf("%d\n", d);
    return 0;
}
