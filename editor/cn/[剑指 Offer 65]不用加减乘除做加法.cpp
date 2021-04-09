//写一个函数，求两个整数之和，要求在函数体内不得使用 “+”、“-”、“*”、“/” 四则运算符号。 
//
// 
//
// 示例: 
//
// 输入: a = 1, b = 1
//输出: 2 
//
// 
//
// 提示： 
//
// 
// a, b 均可能是负数或 0 
// 结果不会溢出 32 位整数 
// 
// 👍 125 👎 0



//leetcode submit region begin(Prohibit modification and deletion)

class Solution {
public:
    int add(int a, int b) {
        // 无进位和、进位值
        int sum, carry;
        while (b != 0) {
            // 异或操作得无进位和
            sum = a ^ b;
            // 与操作后移位得进位值
            carry = ((unsigned int) (a & b) << 1);

            // 循环，直到进位为0
            a = sum;
            b = carry;
        }

        return a;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


