//输入一个非负整数数组，把数组里所有数字拼接起来排成一个数，打印能拼接出的所有数字中最小的一个。 
//
// 
//
// 示例 1: 
//
// 输入: [10,2]
//输出: "102" 
//
// 示例 2: 
//
// 输入: [3,30,34,5,9]
//输出: "3033459" 
//
// 
//
// 提示: 
//
// 
// 0 < nums.length <= 100 
// 
//
// 说明: 
//
// 
// 输出结果可能非常大，所以你需要返回一个字符串而不是整数 
// 拼接起来的数字可能会有前导 0，最后结果不需要去掉前导 0 
// 
// Related Topics 排序 
// 👍 162 👎 0



//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    void quickSort(vector<string>& strs, int left, int right) {
        if (left >= right) return;
        int l = left;
        int r = right;
        string pivot = strs[left];
        while (l < r) {
            while (l < r && strs[r] + pivot >= pivot + strs[r]) r--; //右哨兵找小的
            while (l < r && strs[l] + pivot <= pivot + strs[l]) l++; //左哨兵找大的
            if (l < r) swap(strs[l], strs[r]);
        }
        swap(strs[l], strs[left]);
        quickSort(strs, left, l - 1);
        quickSort(strs, l + 1, right);
    }
    string minNumber(vector<int>& nums) {
        vector<string> strs;
        for (int num : nums) strs.push_back(to_string(num));
        quickSort(strs, 0, strs.size() - 1);
        string ans;
        for (string str : strs) ans += str;
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


