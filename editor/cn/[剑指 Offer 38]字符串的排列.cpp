//输入一个字符串，打印出该字符串中字符的所有排列。 
//
// 
//
// 你可以以任意顺序返回这个字符串数组，但里面不能有重复元素。 
//
// 
//
// 示例: 
//
// 输入：s = "abc"
//输出：["abc","acb","bac","bca","cab","cba"]
// 
//
// 
//
// 限制： 
//
// 1 <= s 的长度 <= 8 
// Related Topics 回溯算法 
// 👍 185 👎 0



//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    void recur(vector<string> &ans,string &s,int depth){
        int length = s.size();
        if(depth>=length-1){
            ans.push_back(s);
            return;
        }
        unordered_set<char> used;
        for(int i=depth;i<length;i++){
            if(used.find(s[i])!=used.end())
                continue;
            used.insert(s[i]);
            swap(s[depth], s[i]);
            recur(ans, s, depth+1);
            swap(s[i], s[depth]);
        }
    }
    vector<string> permutation(string s) {
        vector<string> ans;
        int depth=0;
        recur(ans,s,depth);
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


