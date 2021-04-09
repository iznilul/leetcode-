#include <stdio.h>
#include <memory.h>
#include <string.h>
#include <stdlib.h>

#define HARSH_TABLE_MAX_SIZE   (1000) // 哈希数组的最大元素个数

typedef struct HarshNode_struct HarshNode;

// 定义一个哈希表的节点
struct HarshNode_struct
{
    char * sKey;   // [sKey,nvalue]是一对键值对
    int nValue;
    HarshNode *pNext;
};

HarshNode * harshTable[HARSH_TABLE_MAX_SIZE]; // 哈希表数组
unsigned int g_harsh_table_size = 0x0;   //已有大小，全局变量



//初始化哈希表
void harsh_table_init(void)
{
    int i = 0x0;
    memset(harshTable,0,sizeof(HarshNode *)*HARSH_TABLE_MAX_SIZE);
    g_harsh_table_size = 0x0;

}


// string harsh function
unsigned int harsh_table_harsh_string(const char * sKey)
{
    const unsigned  char* p =  (const unsigned  char*) sKey;
//    printf("init_p:%u\n", *p);
    unsigned int value = *p;
//    printf("init_value:%u\n", value);
//    if(value)
//    {
//        for( p += 1; *p != '\0'; p++)
//        {
//            value = (value << 5) - value + *p;
//        }
//    }
//    printf("return_value%u\n", value);
    return value;

}


//根据键值对向哈希表中添加节点，如果skey已经存在则直接更新键值nValue
//添加成功返回0，添加失败返回-1
int harsh_table_insert_node(const char * sKey, int nValue) {
    HarshNode *pHarshNodeHead = NULL;
    HarshNode *node = NULL;
//    HarshNode *pNewNode = NULL;
//    HarshNode *pHarshNodeHead =(HarshNode *) malloc(sizeof(HarshNode));
    HarshNode *pNewNode = (HarshNode *) malloc(sizeof(HarshNode));
    unsigned int pos = 0x0;

    if (NULL == pNewNode) {
        return -1;//-1的话分配出问题
    }
    memset(pNewNode, 0, sizeof(HarshNode));

    pNewNode->sKey = (char *) malloc(strlen(sKey) + 1); //申请一块sKey大小的内存
    if (NULL == pNewNode->sKey) {
        return -1;
    }
    memset(pNewNode->sKey, 0, strlen(sKey) + 1);
    strcpy(pNewNode->sKey, sKey); //将sKey的内容赋给 pNewNode -> sKey
    pNewNode->nValue = nValue; //键值也复制过来
    pNewNode->pNext = NULL;

    if ((g_harsh_table_size >= HARSH_TABLE_MAX_SIZE) || (NULL == sKey))//分配地址
        return -1;

    pos = harsh_table_harsh_string(sKey) % HARSH_TABLE_MAX_SIZE; //用这种方法计算sKey在哈希数组中对应的位置

    printf("harsh_table_insert_node : pos = %d\n", pos);

    pHarshNodeHead = harshTable[pos];
//    printf("%d\n", pHarshNodeHead->nValue);  //指针未分配空间错误判断
    if (NULL == pHarshNodeHead) {
        printf("harsh_table_insert_node:NULL == pHarshNodeHead\n");
        harshTable[pos]= pNewNode;
    }
    else {
        while (NULL != pHarshNodeHead)  // 如果这个位置对应的不是这一串中最后一个节点的话，那就要向后移动了
        {
            if (strcmp(pHarshNodeHead->sKey, sKey) == 0) //如果这个键值对已经存在，只更新键值即可
            {
                pHarshNodeHead->nValue = nValue;

                return 0;//如果已存在，更新完直接返回,不必再指向数据头节点
            }
            node = pHarshNodeHead;
            pHarshNodeHead = pHarshNodeHead->pNext;  //向后移动,肯定会有NULL的时候
        }

        pHarshNodeHead = (HarshNode *) malloc(sizeof(HarshNode));
//        memset(pHarshNodeHead, 0, sizeof(HarshNode));
        pHarshNodeHead = pNewNode;
        node->pNext = pHarshNodeHead;
    }

//    pNewNode ->pNext = harshTable[pos] ; //头插法,由于是新节点，也是头节点，所以pNext指向原来的头
//    harshTable[pos] = pNewNode; //最后一定要让数组中的这个位置指向这个头指针

    g_harsh_table_size ++;
    return 0;


}


//打印数组中对应的某个位置的那一串哈希值
void print_harsh_node(int pos)
{
    HarshNode * pHarshNodeHead   = NULL;

    if(pos >= HARSH_TABLE_MAX_SIZE)
        return;

    pHarshNodeHead = harshTable[pos];

    if(NULL == pHarshNodeHead)
        printf("NULL == pHarshNodeHead\n");
    while(NULL != pHarshNodeHead)
    {
//        printf("come here \n");
        printf("Position:%d, sKey:%s, nValue:%d \n",pos,pHarshNodeHead->sKey,pHarshNodeHead->nValue);
        pHarshNodeHead = pHarshNodeHead->pNext;

    }


}

// 根据键值sKey来查找对应的哈希节点
HarshNode * harsh_table_lookup(const char *sKey)
{
    unsigned int pos = 0x0;
    HarshNode * pHarshHead = NULL;

    if(NULL == sKey)
    {
        return NULL;
    }

    pos = harsh_table_harsh_string(sKey) % HARSH_TABLE_MAX_SIZE; //计算出在哈希数组中的位置

    pHarshHead = harshTable[pos];

    while(NULL != pHarshHead)
    {
        if(strcmp(sKey,pHarshHead->sKey) == 0)//找到了
            return pHarshHead;

        pHarshHead = pHarshHead->pNext; // 没有找到的话来到下一个节点
    }

    return NULL;

}



void main(void)
{
    char * pSkey = "ABCD";
    int nValue = 1234;
    char * pSkey1 = "ABDC";
    int nValue1 = 1243;
    int ret = -1;
    int pos = 0xffffffff;
    harsh_table_init();
    ret = harsh_table_insert_node(pSkey,nValue);

    printf("ret = %d\n",ret);

    ret = harsh_table_insert_node(pSkey1, nValue1);
    printf("ret=%d\n", ret);
    if(!ret)
    {
        pos = harsh_table_harsh_string(pSkey) % HARSH_TABLE_MAX_SIZE;
        printf("main:  pos = %d\n",pos);
        print_harsh_node(pos);
        printf("total_size:%d\n", g_harsh_table_size);
    }
//    pHarshNode = harsh_table_lookup(pSkey);
//
//    if(NULL != pHarshNode)
//    {
//        printf("Got it: sKey:%s, nValue: %d\n",pHarshNode->sKey,pHarshNode->nValue);
//    }


}