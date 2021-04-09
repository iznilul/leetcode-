//输入整数数组 arr ，找出其中最小的 k 个数。例如，输入4、5、1、6、2、7、3、8这8个数字，则最小的4个数字是1、2、3、4。 
//
// 
//
// 示例 1： 
//
// 输入：arr = [3,2,1], k = 2
//输出：[1,2] 或者 [2,1]
// 
//
// 示例 2： 
//
// 输入：arr = [0,1,2,1], k = 1
//输出：[0] 
//
// 
//
// 限制： 
//
// 
// 0 <= k <= arr.length <= 10000 
// 0 <= arr[i] <= 10000 
// 
// Related Topics 堆 分治算法 
// 👍 197 👎 0



//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> getLeastNumbers(vector<int>& arr, int k) {
        int length = arr.size();
        vector<int> ans(k,0);
        if(k==length) return arr;
        if(k==0) return ans;
        priority_queue<int> queue;
        for (int i = 0; i < k; i++)
            queue.push(arr[i]);
        for(int i=k;i<length;i++){
            if(queue.top()>arr[i]){
                queue.pop();
                queue.push(arr[i]);
            }
        }
        for (int i = 0; i < k; i++) {
            ans[i] = queue.top();
            queue.pop();
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


