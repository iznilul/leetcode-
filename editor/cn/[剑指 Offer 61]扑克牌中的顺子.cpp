//从扑克牌中随机抽5张牌，判断是不是一个顺子，即这5张牌是不是连续的。2～10为数字本身，A为1，J为11，Q为12，K为13，而大、小王为 0 ，可以看成任
//意数字。A 不能视为 14。 
//
// 
//
// 示例 1: 
//
// 输入: [1,2,3,4,5]
//输出: True 
//
// 
//
// 示例 2: 
//
// 输入: [0,0,1,2,5]
//输出: True 
//
// 
//
// 限制： 
//
// 数组长度为 5 
//
// 数组的数取值为 [0, 13] . 
// 👍 97 👎 0



//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool isStraight(vector<int>& nums) {
        int minIndex = 0;
        sort(nums.begin(), nums.end());
        for(int i = 0; i < 4; ++i)
        {
            if(nums[i] == 0)   ++minIndex;
            else if(nums[i+1] == nums[i])  return false;
        }
        return nums[4] - nums[minIndex] < 5;   //最大的数-最小的数（除开王）< 5则是顺子
    }
};
//leetcode submit region end(Prohibit modification and deletion)


