//给出两个 非空 的链表用来表示两个非负的整数。其中，它们各自的位数是按照 逆序 的方式存储的，并且它们的每个节点只能存储 一位 数字。 
//
// 如果，我们将这两个数相加起来，则会返回一个新的链表来表示它们的和。 
//
// 您可以假设除了数字 0 之外，这两个数都不会以 0 开头。 
//
// 示例： 
//
// 输入：(2 -> 4 -> 3) + (5 -> 6 -> 4)
//输出：7 -> 0 -> 8
//原因：342 + 465 = 807
// 
// Related Topics 链表 数学 
// 👍 5293 👎 0

# include<stdio.h>
# include<iostream>
# include<stdlib.h>
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
/**
 * Definition for singly-linked list.
 * struct ListNode{
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode *head = (struct ListNode *) malloc(sizeof(struct ListNode));
    struct ListNode *cur = NULL;
    cur = head;
    int flag = 0;
    int sum;
    int l1val, l2val;
    while (NULL != l1 || NULL != l2 || flag) {
        l1val = 0, l2val = 0;
        if (NULL != l1) {
            l1val = l1->val;
            l1 = l1->next;
        }
        if (NULL != l2) {
            l2val = l2->val;
            l2 = l2->next;
        }
        sum = (l1val + l2val + flag) % 10;
        flag = (l1val + l2val + flag) / 10;
        struct ListNode *node = malloc(sizeof(struct ListNode));
        node->val = sum;
        node->next = NULL;
        cur->next = node;
        cur = cur->next;
//        printf("%d %d\n", pop(stack1)->val, pop(stack2)->val);
    }
//    show(head->next);
    return head->next;
}
//leetcode submit region end(Prohibit modification and deletion)


int main(){

}