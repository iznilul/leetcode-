//输入一个整数数组，实现一个函数来调整该数组中数字的顺序，使得所有奇数位于数组的前半部分，所有偶数位于数组的后半部分。 
//
// 
//
// 示例： 
//
// 输入：nums = [1,2,3,4]
//输出：[1,3,2,4] 
//注：[3,1,2,4] 也是正确的答案之一。 
//
// 
//
// 提示： 
//
// 
// 1 <= nums.length <= 50000 
// 1 <= nums[i] <= 10000 
// 
// 👍 78 👎 0



//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> exchange(vector<int>& nums) {
        int length = nums.size();
        if(length==1)
            return nums;
        queue<int> q1;
        queue<int> q2;
        vector<int> ans;
        for(int i=0;i<length;i++){
            if(nums[i]%2!=0)
                q1.push(nums[i]);
            else
                q2.push(nums[i]);
        }
        while(!q1.empty()){
            ans.push_back(q1.front());
            q1.pop();
        }
        while(!q2.empty()){
            ans.push_back(q2.front());
            q2.pop();
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


