//在一个数组 nums 中除一个数字只出现一次之外，其他数字都出现了三次。请找出那个只出现一次的数字。 
//
// 
//
// 示例 1： 
//
// 输入：nums = [3,4,3,3]
//输出：4
// 
//
// 示例 2： 
//
// 输入：nums = [9,1,7,9,7,9,7]
//输出：1 
//
// 
//
// 限制： 
//
// 
// 1 <= nums.length <= 10000 
// 1 <= nums[i] < 2^31 
// 
//
// 
// 👍 135 👎 0



//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int bits[32] = {0}, res = 0;      //存放各位1出现的次数
        for(int num : nums)     //统计二进制位
        {
            for(int i = 31; i >= 0; --i)
            {
                bits[i] += num & 1;
                num >>= 1;
            }
        }
        for(int n : bits)       //还原
        {
            res <<= 1;
            res += n % 3;   //n % 3表示目标数字的二进制位，因为其他数字都是3的倍数次数出现的
        }
        return res;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


