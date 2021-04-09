//定义一个函数，输入一个链表的头节点，反转该链表并输出反转后链表的头节点。 
//
// 
//
// 示例: 
//
// 输入: 1->2->3->4->5->NULL
//输出: 5->4->3->2->1->NULL 
//
// 
//
// 限制： 
//
// 0 <= 节点个数 <= 5000 
//
// 
//
// 注意：本题与主站 206 题相同：https://leetcode-cn.com/problems/reverse-linked-list/ 
// Related Topics 链表 
// 👍 169 👎 0



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
    ListNode* reverseList(ListNode* head) {
        ListNode* tail=head;
        stack<int> stack;
        while(tail!= nullptr){
            stack.push(tail->val);
            tail = tail->next;
        }
        ListNode* ansHead= nullptr;
        ListNode *ansTail = nullptr;
        while(!stack.empty()){
            if(ansHead== nullptr){
                ansHead = new ListNode(stack.top());
                ansTail = ansHead;
                stack.pop();
            }
            else{
                ListNode *node = new ListNode(stack.top());
                stack.pop();
                ansTail->next = node;
                ansTail = node;
            }
        }
        return ansHead;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


