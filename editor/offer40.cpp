//
// Created by Administrator on 2021/2/23.
//
#include <iostream>
#include <vector>
#include <queue>

using namespace std;

class Solution {
public:
    vector<int> getLeastNumbers(vector<int>& arr, int k) {
        int length = arr.size();
        vector<int> ans(k,0);
        if(k==length) return arr;
        if(k==0) return ans;
        priority_queue<int> queue;
        for (int i = 0; i < k; i++)
            queue.push(arr[i]);
        for(int i=k;i<length;i++){
            if(queue.top()>arr[i]){
                queue.pop();
                queue.push(arr[i]);
            }
        }
        for (int i = 0; i < k; i++) {
            ans[i] = queue.top();
            queue.pop();
        }
        return ans;
    }
};
int main(){
    vector<int> arr={4,3,5,2,1,6,8,7};
    vector<int> ans;
    Solution solution;
    ans = solution.getLeastNumbers(arr, 4);
//    printf("%d", (0 + 7) / 3);
    return 0;
}