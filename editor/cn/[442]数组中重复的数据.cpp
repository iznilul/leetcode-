//给定一个整数数组 a，其中1 ≤ a[i] ≤ n （n为数组长度）, 其中有些元素出现两次而其他元素出现一次。 
//
// 找到所有出现两次的元素。 
//
// 你可以不用到任何额外空间并在O(n)时间复杂度内解决这个问题吗？ 
//
// 示例： 
//
// 
//输入:
//[4,3,2,7,8,2,3,1]
//
//输出:
//[2,3]
// 
// Related Topics 数组 
// 👍 341 👎 0



//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {

        vector<int>result;
        int m = nums.size();
        if(m == 0) return result;
        for(int i = 0; i < m; i++)
        {
            int num = abs(nums[i]);
            if(nums[num - 1] > 0)
                nums[num - 1] *=(-1);
            else result.push_back(num);
        }

        return result;
    }
};

//leetcode submit region end(Prohibit modification and deletion)


