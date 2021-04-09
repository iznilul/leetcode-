//输入一个链表的头节点，从尾到头反过来返回每个节点的值（用数组返回）。 
//
// 
//
// 示例 1： 
//
// 输入：head = [1,3,2]
//输出：[2,3,1] 
//
// 
//
// 限制： 
//
// 0 <= 链表长度 <= 10000 
// Related Topics 链表 
// 👍 92 👎 0



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
    vector<int> reversePrint(ListNode* head) {
        if(head== nullptr)
            return {};
        stack<int> stack;
        vector<int> v;
        while(head!= nullptr){
            stack.push(head->val);
            head = head->next;
        }
        while(!stack.empty()){
            v.push_back(stack.top());
            stack.pop();
        }
        return v;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


