//给定一个数组 A[0,1,…,n-1]，请构建一个数组 B[0,1,…,n-1]，其中 B[i] 的值是数组 A 中除了下标 i 以外的元素的积, 即 B[
//i]=A[0]×A[1]×…×A[i-1]×A[i+1]×…×A[n-1]。不能使用除法。 
//
// 
//
// 示例: 
//
// 
//输入: [1,2,3,4,5]
//输出: [120,60,40,30,24] 
//
// 
//
// 提示： 
//
// 
// 所有元素乘积之和不会溢出 32 位整数 
// a.length <= 100000 
// 
// 👍 84 👎 0



//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> constructArr(vector<int>& a) {
        int n = a.size(), right = 1;
        vector<int> B(n,1);              //定义一个输出数组
        for(int i = 1; i < n ; ++i)
            B[i] = B[i-1] * a[i-1];      //此时B[i]记录i左边的乘积,B[0] = 1
        for(int i = n-2 ; i >= 0 ; --i)
        {
            right *= a[i+1];             //right记录i右边的乘积
            B[i] = B[i] * right;         //结果 = 左边乘积*右边乘积
        }
        return B;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


