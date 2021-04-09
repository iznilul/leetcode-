//判断一个整数是否是回文数。回文数是指正序（从左向右）和倒序（从右向左）读都是一样的整数。 
//
// 示例 1: 
//
// 输入: 121
//输出: true
// 
//
// 示例 2: 
//
// 输入: -121
//输出: false
//解释: 从左向右读, 为 -121 。 从右向左读, 为 121- 。因此它不是一个回文数。
// 
//
// 示例 3: 
//
// 输入: 10
//输出: false
//解释: 从右向左读, 为 01 。因此它不是一个回文数。
// 
//
// 进阶: 
//
// 你能不将整数转为字符串来解决这个问题吗？ 
// Related Topics 数学 
// 👍 1346 👎 0



//leetcode submit region begin(Prohibit modification and deletion)


bool isPalindrome(int x){
    if(x<0)
        return false;
    if(x==0)
        return true;
    int a[10]={0};
    int count=0;
    for (; x; x /= 10,count++) {
        a[count]=x%10;
    }
    count--;
    int length = count;
    for (int i = 0; i <= length / 2; i++) {
//        printf("%d %d\n", a[i], a[count]);
        if(a[i]!=a[count])
            return false;
        count--;
    }
    return true;
}
//leetcode submit region end(Prohibit modification and deletion)


