//
// Created by Administrator on 2021/3/4.
//
#include <iostream>
#include <deque>
#include <queue>
using namespace std;
class MaxQueue {
public:
    deque<int> dq;
    queue<int> q;

    int max_value() {
        if(dq.empty()) return -1;
        return dq.front();
    }

    void push_back(int value) {
        q.push(value);
        while(!dq.empty() && value > dq.back())
            dq.pop_back(); //维护双端队列由大到小的单调性
        dq.push_back(value);
    }

    int pop_front() {
        if(q.empty()) return -1;
        if(q.front() == dq.front())
            dq.pop_front();
        int res = q.front();
        q.pop();
        return res;
    }
};
