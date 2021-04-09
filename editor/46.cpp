//
// Created by Administrator on 2021/3/17.
//
#include <iostream>
#include <vector>
using namespace std;
class Solution {
    vector<vector<int>> ans;
public:
    void dfs(vector<int>& v,int index,int len){
        if(index==len){
            ans.push_back(v);
            return ;
        }
        for(int i=index;i<len;i++){
            swap(v[index],v[i]);
            dfs(v,index+1,len);
            swap(v[index],v[i]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        int len=nums.size();
        if(len==0)
            return ans;
        dfs(nums,0,len);
        return ans;
    }
};
int main(){
    vector<int> v={1,2,3,4};
    Solution solution;
    vector<vector<int>> ans = solution.permute(v);
    return 0;
}