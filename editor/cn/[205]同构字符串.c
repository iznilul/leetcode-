//给定两个字符串 s 和 t，判断它们是否是同构的。 
//
// 如果 s 中的字符可以被替换得到 t ，那么这两个字符串是同构的。 
//
// 所有出现的字符都必须用另一个字符替换，同时保留字符的顺序。两个字符不能映射到同一个字符上，但字符可以映射自己本身。 
//
// 示例 1: 
//
// 输入: s = "egg", t = "add"
//输出: true
// 
//
// 示例 2: 
//
// 输入: s = "foo", t = "bar"
//输出: false 
//
// 示例 3: 
//
// 输入: s = "paper", t = "title"
//输出: true 
//
// 说明: 
//你可以假设 s 和 t 具有相同的长度。 
// Related Topics 哈希表 
// 👍 305 👎 0



//leetcode submit region begin(Prohibit modification and deletion)

typedef struct HashNode_struct{
    char key;
    char value;
}HashNode;
typedef struct HashMap_struct{
    HashNode **head;
}HashMap;
void HashInit(HashMap *hashMap,int size){
    if(size<0)
        return ;
    HashNode **node = (HashNode **) malloc(size * sizeof(HashNode *));
    hashMap->head = node;
    memset(hashMap->head, 0, size*sizeof(HashNode *));
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
bool isIsomorphic(char * s, char * t){
    int size=128;
    HashMap hashMap1,hashMap2;
    HashInit(&hashMap1, size);
    HashInit(&hashMap2, size);
    for (int i = 0; s[i] != '\0'; i++) {
        if(!insert(&hashMap1,&hashMap2, s[i], t[i]))
            return false;
    }
    return true;
}


//leetcode submit region end(Prohibit modification and deletion)


