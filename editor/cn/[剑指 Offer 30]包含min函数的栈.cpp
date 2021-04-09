//定义栈的数据结构，请在该类型中实现一个能够得到栈的最小元素的 min 函数在该栈中，调用 min、push 及 pop 的时间复杂度都是 O(1)。 
//
// 
//
// 示例: 
//
// MinStack minStack = new MinStack();
//minStack.push(-2);
//minStack.push(0);
//minStack.push(-3);
//minStack.min();   --> 返回 -3.
//minStack.pop();
//minStack.top();      --> 返回 0.
//minStack.min();   --> 返回 -2.
// 
//
// 
//
// 提示： 
//
// 
// 各函数的调用总次数不超过 20000 次 
// 
//
// 
//
// 注意：本题与主站 155 题相同：https://leetcode-cn.com/problems/min-stack/ 
// Related Topics 栈 设计 
// 👍 83 👎 0



//leetcode submit region begin(Prohibit modification and deletion)
struct Stack{
    int value;
    Stack* next;
    Stack():value(NULL),next(nullptr){}
    Stack(int x):value(x),next(nullptr){}
    Stack(int x,Stack* next):value(x),next(next){}
};
class MinStack {
    Stack* head;
    Stack* tail;
    int minNumber=INT_MAX;
public:
    /** initialize your data structure here. */
    MinStack() {
        head = new Stack;
        tail = head;
    }

    void push(int x) {
        Stack *stack = new Stack(x);
        tail->next = stack;
        tail = stack;
    }

    void pop() {
        Stack* stack=head;
        while(stack->next!=tail){
            stack = stack->next;
        }
        tail = stack;
        tail->next = nullptr;
    }

    int top() {
        return tail->value;
    }

    int min() {
        minNumber=INT_MAX;
        Stack *stack=head->next;
        while(stack!= nullptr){
            if(stack->value<minNumber)
                minNumber = stack->value;
            stack = stack->next;
        }
        return minNumber;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->min();
 */
//leetcode submit region end(Prohibit modification and deletion)


