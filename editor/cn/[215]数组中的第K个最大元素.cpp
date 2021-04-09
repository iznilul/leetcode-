//在未排序的数组中找到第 k 个最大的元素。请注意，你需要找的是数组排序后的第 k 个最大的元素，而不是第 k 个不同的元素。 
//
// 示例 1: 
//
// 输入: [3,2,1,5,6,4] 和 k = 2
//输出: 5
// 
//
// 示例 2: 
//
// 输入: [3,2,3,1,2,4,5,5,6] 和 k = 4
//输出: 4 
//
// 说明: 
//
// 你可以假设 k 总是有效的，且 1 ≤ k ≤ 数组的长度。 
// Related Topics 堆 分治算法 
// 👍 917 👎 0



//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    void quickSort(vector<int>& nums,int left,int right){
        if(left>=right)
            return ;
        int pivot=nums[left];
        int i=left,j=right;
        while(i<j){
            while(i<=j&&nums[j]>=pivot)
                j--;
            if(i<=j)
                swap(nums[i],nums[j]);
            while(i<=j&&nums[i]<=pivot)
                i++;
            if(i<=j)
                swap(nums[i],nums[j]);
        }
        quickSort(nums,left,i-1);
        quickSort(nums,i+1,right);
    }
    int findKthLargest(vector<int>& nums, int k) {
        quickSort(nums,0,nums.size()-1);
        return nums[nums.size()-k+1];
    }
};

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int length=nums.size();
        if(length==1)
            return nums[0];
        priority_queue<int, vector<int>, greater<int> > queue;
        for(int i=0;i<k;i++){
            queue.push(nums[i]);
        }
        for(int i=k;i<length;i++){
            if(nums[i]>queue.top()){
                queue.pop();
                queue.push(nums[i]);
            }
        }
        return queue.top();
    }
};
//leetcode submit region end(Prohibit modification and deletion)


