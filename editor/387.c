//
// Created by Administrator on 2020/12/23.
//
#include <stdio.h>
#define Max 10000

#include <string.h>
#include <stdlib.h>
typedef struct HashNode_struct{
    int key;
    int value;
}HashNode;
typedef struct HashMap_struct{
    HashNode **head;
    int size;
}HashMap;
int HashInit(HashMap *hashmap,int size){
    if(size<0)
        return 0;
    HashNode **node = (HashNode **) malloc(size*sizeof(HashNode *));
    hashmap->head = node;
    memset(hashmap->head, 0, size*sizeof(HashNode *));
    if(NULL==hashmap->head)
        return 0;
    hashmap->size = size;
    return 1;
}
int find(HashMap *hashMap,int key){
    if(key<0||key>26)
        return 0;
    HashNode *node = NULL;
    node = hashMap->head[key];
    if(NULL==node)
        return 0;
    return node->value;
}
void add(HashMap *hashMap,int key){
    HashNode *node;
    node = hashMap->head[key];
    if(NULL==node) {
        node = (HashNode *) malloc(sizeof(HashNode));
        node->key = key;
        node->value=1;
        hashMap->head[key] = node;
    } else {
        node->value++;
    }
}
int main(){
    HashMap hashMap;
    if(HashInit(&hashMap, 26)) {
        char s[Max];
        scanf("%s", s);
        for (int i = 0; s[i] != '\0'; i++) {
            add(&hashMap, s[i] - 97);
        }
        for (int i = 0; s[i] != '\0'; i++) {
            if (find(&hashMap, s[i] - 97) == 1) {
                return i;
//                printf("%d", i);
            }
        }
        return 0;
    }
}
//    char s[Max];
//    scanf("%s", s);
//    int i = firstUniqChar(s);
//    printf("%d", i);
//    return 0;

//int firstUniqChar(char * s) {
//    int a[26]={0};
//    for (int i = 0; s[i] != '\0'; i++) {
//        a[s[i] - 97]++;
//    }
//    for (int i = 0;s[i]!='\0'; i++) {
//        if(a[s[i] - 97]==1) {
//            return i;
//        }
//    }
//    return -1;
//}