//
// Created by Administrator on 2021/2/13.
//
#include <iostream>
#include <vector>
#include <stack>
using namespace std;
class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        int size = pushed.size();
        if(size==0)
            return true;
        stack<int> stack;
        int count=0;
        for(int i:pushed){
            stack.push(i);
            while(!stack.empty()&&stack.top()==popped.front()){
                stack.pop();
                popped.erase(popped.begin());
                count++;
            }
        }
        return count==size;
    }
};
int main(){
    Solution solution;
    vector<int> v1={2,1,0};
    vector<int> v2={1,2,0};
    printf("%d", solution.validateStackSequences(v1, v2));
    return 0;
}