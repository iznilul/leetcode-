//
// Created by Administrator on 2020/12/27.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct HashNode_struct{
    char key;
    char value;
}HashNode;
typedef struct HashMap_struct{
    HashNode **head;
//    int size;
}HashMap;
void HashInit(HashMap *hashMap,int size){
    if(size<0)
        return ;
    HashNode **node = (HashNode **) malloc(size * sizeof(HashNode *));
    hashMap->head = node;
    memset(hashMap->head, 0, size*sizeof(HashNode *));
//    hashMap->size = size;
}
char find(HashMap *hashMap,int key){
    HashNode *node = NULL;
    node = hashMap->head[key];
    if(NULL==node)
        return 0;
    return node->value;
}
int insert(HashMap *hashMap1,HashMap *hashMap2,char key,char value){
    int pos=key;
    int pos_=value;
    if (NULL == hashMap1->head[pos]) {
        HashNode *node = (HashNode *) malloc(sizeof(HashNode));
        node->key = key;
        node->value = value;
        hashMap1->head[pos] = node;
    }
    else{
        if(hashMap1->head[pos]->value!=value)
            return 0;
    }
    if (NULL == hashMap2->head[pos_]) {
        HashNode *node = (HashNode *) malloc(sizeof(HashNode));
        node->key = value;
        node->value = key;
        hashMap2->head[pos_] = node;
    }
    else{
        if(hashMap2->head[pos_]->value!=key)
            return 0;
    }
    return 1;
}
int isIsomorphic(char * s, char * t){
    int size=128;
    HashMap hashMap1,hashMap2;
    HashInit(&hashMap1, size);
    HashInit(&hashMap2, size);
    for (int i = 0; s[i] != '\0'; i++) {
        if(!insert(&hashMap1,&hashMap2, s[i], t[i]))
            return 0;
    }
    return 1;
}
int main(){
    char s[] = "13";
    char t[] = "42";
    printf("%d\n", isIsomorphic(s, t));
    return 0;
}
