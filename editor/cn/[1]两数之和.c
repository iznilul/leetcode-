//给定一个整数数组 nums 和一个目标值 target，请你在该数组中找出和为目标值的那 两个 整数，并返回他们的数组下标。 
//
// 你可以假设每种输入只会对应一个答案。但是，数组中同一个元素不能使用两遍。 
//
// 
//
// 示例: 
//
// 给定 nums = [2, 7, 11, 15], target = 9
//
//因为 nums[0] + nums[1] = 2 + 7 = 9
//所以返回 [0, 1]
// 
// Related Topics 数组 哈希表 
// 👍 9683 👎 0


//leetcode submit region begin(Prohibit modification and deletion)

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    hashTable hashTable;
    int *res = (int *) malloc(sizeof(int) * 2);
    *returnSize=0;
    if (hash_init(&hashTable, 100)) {
//        for (int i = 0; i < numsSize; i++) {
//
//        }
        for(int i = 0; i < numsSize; i++)
        {
            int value = target - nums[i];//根据另外一个值直接在哈希表中查询
            hashNode *node= hash_find(hashTable, value);//根据key来查询value的是否在哈希表。
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
//leetcode submit region end(Prohibit modification and deletion)
