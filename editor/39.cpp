//
// Created by Administrator on 2021/3/27.
//
#include <iostream>
#include <vector>
using namespace std;
class Solution {
    vector<vector<int>> ans;
public:
    void dfs(vector<int>& candidates,vector<int> v,int target,int index){
        if(index==candidates.size())
            return ;
        if(target==0){
            ans.emplace_back(v);
            return ;
        }
        dfs(candidates,v,target,index+1);
        if(target-candidates[index]>=0){
            v.emplace_back(candidates[index]);
            dfs(candidates,v,target-candidates[index],index);
            v.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> v;
        dfs(candidates,v,target,0);
        return ans;
    }
};
int main() {
    vector<int> v = {2, 3, 6, 7};
    Solution solution;
    vector<vector<int>> ans = solution.combinationSum(v,7);
    return 0;
}
