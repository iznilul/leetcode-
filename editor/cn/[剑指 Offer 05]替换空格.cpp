//请实现一个函数，把字符串 s 中的每个空格替换成"%20"。 
//
// 
//
// 示例 1： 
//
// 输入：s = "We are happy."
//输出："We%20are%20happy." 
//
// 
//
// 限制： 
//
// 0 <= s 的长度 <= 10000 
// 👍 66 👎 0



//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    string replaceSpace(string s) {
        int length = s.length();
        int count=0;
        for(int i=0;i<length;i++){
            if(s[i]==' ')
                count++;
        }
        s.resize(length + count * 2);
        int length1=s.length();
        for(int i=length-1,j=length1-1;i>=0;i--,j--){
            if(s[i]!=' ')
                s[j] = s[i];
            else{
                s[j] = '0';
                s[j - 1] = '2';
                s[j - 2] = '%';
                j-=2;
            }
        }
        return s;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


