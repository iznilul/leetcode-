//
// Created by Administrator on 2021/2/1.
//
#include <iostream>
#include <limits.h>
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
    int minNumber;
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
int main(){
    MinStack minStack;
    minStack.push(1);
    minStack.push(2);
    minStack.push(-3);
    printf("%d",minStack.min());
    minStack.pop();
    printf("%d",minStack.top());
    printf("%d",minStack.min());
}