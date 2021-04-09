//
// Created by Administrator on 2020/11/24.
//
//#include <stdio.h>
//#include<stdlib.h>
//#include <string.h>

//int* twoSum(int* nums, int numsSize, int target, int* returnSize){
//    int i,j;
//    for(i=0;i<numsSize-1;i++)
//        for(j=i+1;j<numsSize;j++)
//            if(nums[i]+nums[j]==target){
//                int *result=(int *)malloc(sizeof(int)*2);
//                result[0]=i;
//                result[1]=j;
//                *returnSize=2;
//                return result;
//            }
//    *returnSize=0;
//    return NULL;
//}
//int main(){
//    int nums[4]={1,5,5,17};
//    int numsSize=4;
//    int target=10;
//    int *returnSize=(int *)malloc(sizeof(int));
//    int *p;
//    p = twoSum(nums, numsSize, target, returnSize);
//    printf("%d %d",*(p),*(p+1));
//}
#define MAX_SIZE (1000)

#include "stdio.h"
#include "stdlib.h"
#include "string.h"
struct hashNode_struct {
    int key;
    int val;
    struct hashNode_struct *next;
};

typedef struct hashNode_struct hashNode;
struct hashTable_struct{
    hashNode **head;
    int size;
};
typedef struct hashTable_struct hashTable;
int hash_init(hashTable *hashTable,int size){
    if(size<0) {
        return 0;
    }
    hashNode **node = malloc(size*sizeof(hashNode *));
    hashTable->head = node;
    memset(hashTable->head, 0, size*sizeof(hashNode *));
    if(NULL==hashTable->head)
        return 0;
    hashTable->size = size;
    return 1;
}

int hash_addr(hashTable table,int key){ //hash表增加元素的个数
    int addr =abs(key) % table.size;//采用的是取余数的方法进行构造hash函数
    return addr;
}
int hash_insert(hashTable table,int key, int val) {
    hashNode *node =malloc(sizeof(hashNode));
    if (NULL!=node) {
        node->key = key;
        node->val = val;
        int pos = hash_addr(table, key);
        node->next = table.head[pos];
        table.head[pos] = node;
        return 1;
    }
    return 0;
}
hashNode *hash_find(hashTable table,int key){
    int pos = hash_addr(table, key);
    hashNode *head = table.head[pos];
    while (NULL != head) {
        if(key==head->key)
            return head;
        head = head->next;
    }
    return NULL;
}
void hash_free(hashTable table){
    if(NULL!=table.head) {
        for (int i=0; i<table.size; i++) {
            hashNode* node= table.head[i];//使用临时变量来存储值
            while (node !=NULL) {//值不是空
                hashNode * temp =node;//还需要另外一个变量保存和删除释放这个结点
                node = node->next;
                free(temp);
            }
        }
        free(table.head);
        table.head = NULL;
    }
    table.size = 0;
}
int main(){
    int numsSize = 4;
    int nums[4]={2,7,11,15};
    int target = 9;
    int *returnSize = (int *) malloc(sizeof(int));
    *returnSize=0;
    int *res = (int *)malloc(sizeof(int) * 2);
    hashTable hashTable;
    if (hash_init(&hashTable, 100)) {
//        for (int i = 0; i < numsSize; i++) {
//            hash_insert(hashTable, nums[i],i);
//        }
        for(int i = 0; i < numsSize; i++)
        {
            int value = target - nums[i];//根据另外一个值直接在哈希表中查询
            hashNode *node= hash_find(hashTable, value);//根据key来查询value的是否在哈希表。//接收
            if (node !=NULL && node->val != i) {//如果找到的值存在，并且查到的值不是本身
                res[1]=i;
                res[0]=node->val;
                * returnSize=2;
                break;
            }
            hash_insert(hashTable, nums[i],i);
        }
        hash_free(hashTable);
        return res;
    }
    return res;
}
