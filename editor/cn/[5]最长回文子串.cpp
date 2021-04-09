//给你一个字符串 s，找到 s 中最长的回文子串。 
//
// 
//
// 示例 1： 
//
// 
//输入：s = "babad"
//输出："bab"
//解释："aba" 同样是符合题意的答案。
// 
//
// 示例 2： 
//
// 
//输入：s = "cbbd"
//输出："bb"
// 
//
// 示例 3： 
//
// 
//输入：s = "a"
//输出："a"
// 
//
// 示例 4： 
//
// 
//输入：s = "ac"
//输出："a"
// 
//
// 
//
// 提示： 
//
// 
// 1 <= s.length <= 1000 
// s 仅由数字和英文字母（大写和/或小写）组成 
// 
// Related Topics 字符串 动态规划 
// 👍 3119 👎 0



//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    string longestPalindrome(string s) {
        int length=s.size();
        if(length<2)
            return s;
        int maxlen=1;
        string ans = s.substr(0, 1);
        vector<vector<bool>> dp(length, vector<bool>(length));
        for (int j = 1; j < length; j++) {
            for (int i=0; i< j; i++) {
                if(s[i]==s[j]) {
                    if (j - i < 3)
                        dp[i][j] = true;
                    else
                        dp[i][j] = dp[i+1][j - 1];
                }
                if(dp[i][j]&&j-i+1>maxlen) {
                    maxlen=j-i+1;
                    ans = s.substr(i, maxlen);
                }
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


