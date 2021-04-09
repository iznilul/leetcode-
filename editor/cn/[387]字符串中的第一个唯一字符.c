//给定一个字符串，找到它的第一个不重复的字符，并返回它的索引。如果不存在，则返回 -1。 
//
// 
//
// 示例： 
//
// s = "leetcode"
//返回 0
//
//s = "loveleetcode"
//返回 2
// 
//
// 
//
// 提示：你可以假定该字符串只包含小写字母。 
// Related Topics 哈希表 字符串 
// 👍 332 👎 0

# include<stdio.h>
# include<iostream>
# include<stdlib.h>
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
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
int firstUniqChar(char * s){
    HashMap hashMap;
    HashInit(&hashMap, 26);
//        char s[Max];
//        scanf("%s", s);
    for (int i = 0; s[i] != '\0'; i++) {
        add(&hashMap, s[i] - 97);
    }
    for (int i = 0; s[i] != '\0'; i++) {
        if (find(&hashMap, s[i] - 97) == 1) {
            return i;
//                printf("%d", i);
        }
    }
    return -1;
}

//leetcode submit region end(Prohibit modification and deletion)


int main(){

}