//输入两个递增排序的链表，合并这两个链表并使新链表中的节点仍然是递增排序的。 
//
// 示例1： 
//
// 输入：1->2->4, 1->3->4
//输出：1->1->2->3->4->4 
//
// 限制： 
//
// 0 <= 链表长度 <= 1000 
//
// 注意：本题与主站 21 题相同：https://leetcode-cn.com/problems/merge-two-sorted-lists/ 
// Related Topics 分治算法 
// 👍 83 👎 0



//leetcode submit region begin(Prohibit modification and deletion)
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(nullptr==l1|| nullptr==l2)
            return l1?l1:l2;
        int val;
        ListNode* head= nullptr;
        ListNode* tail= nullptr;
        ListNode* cursor1= l1;
        ListNode* cursor2= l2;
        while(cursor1&&cursor2){
            if(cursor1->val<=cursor2->val){
                if(nullptr==head){
                    head=cursor1;
                    tail=head;
                }else{
                    tail->next=cursor1;
                    tail = cursor1;
                }
                cursor1 = cursor1->next;
            }
            else{
                if(nullptr==head){
                    head=cursor2;
                    tail=head;
                }else{
                    tail->next=cursor2;
                    tail=cursor2;
                }
                cursor2 = cursor2->next;
            }
        }
        if(cursor1||cursor2){
            tail->next=cursor1?cursor1:cursor2;
        }
        return head;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


