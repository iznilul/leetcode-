//
// Created by Administrator on 2020/12/12.
//
#include <iostream>
using namespace std;
struct test_struct{
    int a;
    struct test *next;
};
typedef test_struct Test;
Test *test;
//Test *test=nullptr;
void position(Test *test){
    printf("%d\n", *test);
}
void position(int *a){
    printf("%p\n", a);
}
int main(){
//    position(test);
//    int b=2;
//    int *a = &b;
//    int *a = NULL;
//    position(a);
    printf("%d", 2 % 10);
    return 0;
}
//int compare(int a, int b) {
//    if(a>b) {
//        return a;
//    }
//    else
//        return b;
//}
//
//int compare1(int a, int b){
//    int max=a>b?a:b;
//    return max;
//}
//
//int main(){
//    compare(1, 2);
//    compare1(1, 2);
//    return 0;
//}

//int main(){
//    int n[]={1,2,3,4,5};
//    int length = sizeof(n) / sizeof(int);
//    int i;
//    ListNode *node=NULL,*head=NULL,*end=NULL;
//    for (i = 0; i < length; i++) {
//        node = malloc(sizeof(ListNode));
//        node->val = n[i];
//        node->next = NULL;
//        if(NULL==head) {
//            head = node;
//        }else{
//            end->next = node;
//        }
//        end = node;
//    }
//    ListNode *tmp;
//    tmp = head;
//    while (NULL != tmp) {
//        printf("%d\n", tmp->val);
//        tmp = tmp->next;
//    }
//    return 0;
//}
