//在字符串 s 中找出第一个只出现一次的字符。如果没有，返回一个单空格。 s 只包含小写字母。 
//
// 示例: 
//
// s = "abaccdeff"
//返回 "b"
//
//s = "" 
//返回 " "
// 
//
// 
//
// 限制： 
//
// 0 <= s 的长度 <= 50000 
// Related Topics 哈希表 
// 👍 73 👎 0



//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    char firstUniqChar(string s) {
        unordered_map<char,int> map;
        for(char c:s){
            map[c]++;
        }
        for(char c:s)
            if(map[c]==1)
                return c;
        return ' ';
    }
};
//leetcode submit region end(Prohibit modification and deletion)


