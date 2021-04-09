//
// Created by Administrator on 2020/12/17.
//
#include <stdlib.h>
#include <stdio.h>
//typedef struct node_struct{
//    int val;
//    struct node_struct *next;
//}Node;
//typedef struct stack_struct{
//    Node *top;
//    Node *bottom;
//}Stack;
//Stack *stack;
//Stack * CreateStack()
//{
//    Stack * stack= (Stack*)malloc(sizeof(Stack));
//    if(NULL==stack)
//        return NULL;//分配空间失败
//    stack->top = stack->bottom;
//    return stack;
//}
//void push(Stack *stack,int val){
//    Node *node = malloc(sizeof(Node));
//    node->val = val;
//    node->next = stack->top;
//    stack->top = node;
//}
//void pop(Stack *stack,int val){
//    Node *node = stack->top;
//    while ( node!=stack->bottom) {
//        if (node->val == val) {
//            stack->top = node->next;
//            free(node);
//            break;
//        }
//        node = node->next;
//    }
//}
//void display(Stack *stack){
//    Node *node = stack->top;
//    while ( node!= stack->bottom) {
//        printf("%d\n", node->val);
//        node = node->next;
//    }
//}
//int main(){
//    int n[]={1,2,3,4,5};
//    int length = sizeof(n) / sizeof(int);
//    stack = CreateStack();
//    for (int i = 0; i < length; i++) {
//        push(stack,n[i]);
//    }
//    display(stack);
//    return 0;
//}




typedef struct ListNode {
    int val;
    struct ListNode *next;
}Node;
typedef struct Stack_struct{
    Node *top;
    Node *bottom;
}Stack;

//int A[]={9,9,9,9,9,9,9};
//int B[]={9,9,9,9};
int A[]={2,4,9};
int B[]={5,6,4,9};
Stack *initStack(){
    Stack *stack = malloc(sizeof(Stack));
    if(NULL==stack)
        return NULL;
    stack->top = stack->bottom=NULL;
    return stack;
}
//Node* initNode(int a[],int length){
//    Node *head=NULL;
//    for (int i = 0; i < length; i++) {
//        Node *node = malloc(sizeof(Node));
//        node->val = a[i];
//        node->next = head;
//        head = node;
//    }
//    return head;
//}
Node* initNode(int a[],int length){
    Node *head=NULL;
    Node *end = NULL;
    for (int i = 0; i < length; i++) {
        Node *node = malloc(sizeof(Node));
        node->val = a[i];
        node->next = NULL;
        if(NULL==head) {
            head = node;
            end = node;
        }
        else{
            end->next = node;
            end = node;
        }
    }
    return head;
}
Node *addNode(Node* head,int val){
    Node *node = malloc(sizeof(Node));
    node->val = val;
    node->next = head;
    head = node;
    return head;
}
Node* reverseList(Node* head) {
    if (head == NULL || head->next == NULL)
        return head;
    Node* prev = (Node*)malloc(sizeof(Node));
    prev->next = head;
    Node* curr = head;
    while (curr->next != NULL) {
        Node* next = curr->next;
        curr->next = next->next;
        next->next = prev->next;
        prev->next = next;
    }
    return prev->next;
}

void show(Node *head){
    while(NULL!=head) {
        printf("%d\n", head->val);
        head = head->next;
    }
}
//void push(Stack *stack,int val){
//    Node *node = malloc(sizeof(Node));
//    node->val = val;
//    node->next = stack->top;
//    stack->top = node;
//}
//Node* pop(Stack *stack){
//    Node *node = stack->top;
//    stack->top = node->next;
//    return node;
//}

//struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2){
//    Stack *stack1 = initStack();
//    Stack *stack2 = initStack();
//    l1 = reverseList(l1);
//    l2 = reverseList(l2);
//    struct ListNode *head = NULL;
//    int flag=0;
//    int sum;
//    int judge;
//    while (NULL != l1) {
//        push(stack1, l1->val);
//        l1 = l1->next;
//    }
//    while (NULL != l2) {
//        push(stack2, l2->val);
//        l2 = l2->next;
//    }
////    display(stack1);
////    display(stack2);
//    while ( stack1->top!= stack1->bottom && stack2->top != stack2->bottom) {
//        sum=pop(stack1)->val+pop(stack2)->val+flag;
//        judge=sum-10>=0?1:0;
//        if(judge){
//            sum%=10;
//            head = addNode(head,sum);
//            flag=1;
//        } else {
//            head = addNode(head, sum);
//            flag=0;
//        }
////        printf("%d %d\n", pop(stack1)->val, pop(stack2)->val);
//    }
//    while(stack1->top!=stack1->bottom) {
//        sum=pop(stack1)->val+flag;
//        judge=sum-10>=0?1:0;
//        if(judge){
//            sum%=10;
//            head = addNode(head,sum);
//            flag=1;
//        } else {
//            head = addNode(head, sum);
//            flag=0;
//        }
//    }
//    while (stack2->top != stack2->bottom) {
//        sum=pop(stack2)->val+flag;
//        judge=sum-10>=0?1:0;
//        if(judge){
//            sum%=10;
//            head = addNode(head,sum);
//            flag=1;
//        } else {
//            head = addNode(head, sum);
//            flag=0;
//        }
//    }
//    if(flag)
//        head = addNode(head, flag);
//    head = reverseList(head);
//    return head;
//}

//struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2){
//    struct ListNode *head = NULL;
//    int flag=0;
//    int sum;
//    int judge;
//    while ( l1!= NULL&& l2!=NULL) {
//        sum=l1->val+l2->val+flag;
//        judge=sum-10>=0?1:0;
//        if(judge){
//            sum%=10;
//            head = addNode(head,sum);
//            flag=1;
//        } else {
//            head = addNode(head, sum);
//            flag=0;
//        }
//        l1 = l1->next;
//        l2 = l2->next;
////        printf("%d %d\n", pop(stack1)->val, pop(stack2)->val);
//    }
//    while(NULL!=l1) {
//        sum=l1->val+flag;
//        judge=sum-10>=0?1:0;
//        if(judge){
//            sum%=10;
//            head = addNode(head,sum);
//            flag=1;
//        } else {
//            head = addNode(head, sum);
//            flag=0;
//        }
//        l1 = l1->next;
//    }
//    while (NULL!=l2) {
//        sum=l2->val+flag;
//        judge=sum-10>=0?1:0;
//        if(judge){
//            sum%=10;
//            head = addNode(head,sum);
//            flag=1;
//        } else {
//            head = addNode(head, sum);
//            flag=0;
//        }
//        l2 = l2->next;
//    }
//    if(flag)
//        head = addNode(head, flag);
//    head = reverseList(head);
//    return head;
//}
//void push(Stack *stack,int val){
//    Node *node = malloc(sizeof(Node));
//    node->val = val;
//    node->next = NULL;
//    if(NULL==stack->top) {
//        stack->top = node;
//        stack->bottom = node;
//    }
//    else {
//        stack->bottom->next = node;
//        stack->bottom = node;
//    }
//}
//Node* pop(Stack *stack){
//    Node *node = stack->top;
//    stack->top = node->next;
//    return node;
//}
//void display(Stack *stack){
//    Node *node = stack->top;
//    while ( NULL!= node) {
//        printf("%d\n", node->val);
//        node = node->next;
//    }
//}
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2){
    struct ListNode *head = (struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode *cur= NULL;
    cur = head;
    int flag=0;
    int sum;
    int l1val,l2val;
    while ( NULL!=l1 || NULL !=l2||flag) {
        l1val=0,l2val=0;
        if(NULL!=l1){
            l1val = l1->val;
            l1 = l1->next;
        }
        if(NULL!=l2){
            l2val = l2->val;
            l2 = l2->next;
        }
        sum=(l1val+l2val+flag)%10;
        flag=(l1val+l2val+flag)/10;
        struct ListNode* node=malloc(sizeof(struct ListNode));
        node->val = sum;
        node->next = NULL;
        cur->next = node;
        cur = cur->next;
//        printf("%d %d\n", pop(stack1)->val, pop(stack2)->val);
    }
    show(head->next);
//    return head;
}
int main(){
    Node *n1=NULL;
    Node *n2=NULL;
    int length1 = sizeof(A) / sizeof(int);
    int length2 = sizeof(B) / sizeof(int);
    n1=initNode(A, length1);
    n2 = initNode(B, length2);
//    show(n1);
//    show(n2);
    addTwoNumbers(n1, n2);
    return 0;
}