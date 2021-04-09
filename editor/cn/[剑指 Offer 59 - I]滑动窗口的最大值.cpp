//给定一个数组 nums 和滑动窗口的大小 k，请找出所有滑动窗口里的最大值。 
//
// 示例: 
//
// 输入: nums = [1,3,-1,-3,5,3,6,7], 和 k = 3
//输出: [3,3,5,5,6,7] 
//解释: 
//
//  滑动窗口的位置                最大值
//---------------               -----
//[1  3  -1] -3  5  3  6  7       3
// 1 [3  -1  -3] 5  3  6  7       3
// 1  3 [-1  -3  5] 3  6  7       5
// 1  3  -1 [-3  5  3] 6  7       5
// 1  3  -1  -3 [5  3  6] 7       6
// 1  3  -1  -3  5 [3  6  7]      7 
//
// 
//
// 提示： 
//
// 你可以假设 k 总是有效的，在输入数组不为空的情况下，1 ≤ k ≤ 输入数组的大小。 
//
// 注意：本题与主站 239 题相同：https://leetcode-cn.com/problems/sliding-window-maximum/ 
// Related Topics 队列 Sliding Window 
// 👍 194 👎 0



//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> res;
        deque<int> dq;      //队列存放的是数组的索引
        for(int i = 0; i < nums.size(); ++i)
        {
            while(!dq.empty() && nums[dq.back()] < nums[i])   dq.pop_back();  //维护队列由大到小的单调性
            dq.push_back(i);
            if(i >= k-1)
            {
                res.push_back(nums[dq.front()]);
                if(i - k + 1 == dq.front())     dq.pop_front(); //如果最大值正好是窗口的第一个位置，弹出
            }
        }
        return res;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


