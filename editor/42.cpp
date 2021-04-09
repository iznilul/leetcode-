//
// Created by Administrator on 2021/3/29.
//
#include <iostream>
#include <vector>
#include <stack>
using namespace std;
int trap(vector<int>& height)
{
    int ans = 0, current = 0;
    stack<int> st;
    while (current < height.size()) {
        while (!st.empty() && height[current] > height[st.top()]) {
            int top = st.top();
            st.pop();
            if (st.empty())
                break;
            int distance = current - st.top() - 1;
            int bounded_height = min(height[current], height[st.top()]) - height[top];
            ans += distance * bounded_height;
        }
        st.push(current++);
    }
    return ans;
}
int main(){
    vector<int> height={0,1,0,2,1,0,1,3,2,1,2,1};
    printf("%d", trap(height));
    return 0;
}