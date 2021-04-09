//
// Created by Administrator on 2021/3/27.
//
//#include<iostream>
//#include<vector>
//#include<queue>
//using namespace std;
//
//struct TreeNode {
//    int val;
//    TreeNode *left;
//    TreeNode *right;
//
//    TreeNode() : val(NULL), left(nullptr), right(nullptr) {};
//
//    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {};
//
//    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {};
//};
//class Solution {
//public:
//    vector<int> ans;
//    vector<int> v;
//    queue<int> q;
//    void dfs(TreeNode *&root, int target) {
//        if (!root)
//            return;
//        if (root->val < target)
//            v.push_back(root->val);
//        else if (root->val > target)
//            return;
//        else {
//            if(ans.empty()){
//                for (int i = 0; i < v.size(); i++)
//                    ans.push_back(v[i]);
//            }
//            else if (v.size() < ans.size()) {
//                ans.clear();
//                for (int i = 0; i < v.size(); i++)
//                    ans.push_back(v[i]);
//            } else {
//                return ;
//            }
//        }
//        dfs(root->left, target - root->val);v.pop_back();
//        dfs(root->right, target - root->val);
//
//    }
//    void print(){
//        int len=ans.size();
//        for(int i=0;i<len;i++){
//            printf("%d%c",ans[i],i==len-1?'\n':' ');
//        }
//    }
//};
//void insert(TreeNode *&treeNode,int a[],int length,int index){
//    if(index>=length)
//        return;
//    treeNode=new TreeNode;
//    treeNode->val = a[index];
//    insert(treeNode->left, a, length, 2 * index + 1);
//    insert(treeNode->right, a, length, 2 * index + 2);
//}
//int main(){
//    int a[]={3,1,5,2,4,4,1};
//    int length = sizeof(a) / sizeof(int);
//    TreeNode *treeNode;
//    insert(treeNode, a, length, 0);
//    Solution solution;
//    solution.dfs(treeNode,8);
//    solution.print();
//    return 0;
//}









//#include<iostream>
//#include <climits>
//using namespace std;
//int main(){
//    int T;
//    int y;
//    int ans=INT_MAX;
//    int sum=0;
//    scanf("%d",&T);
//    scanf("%d",&y);
//    while(true){
//
//        scanf("%d",&a[i]);
//            if(sum>=T){
//                ans=min(sum,ans);
//                sum-=a[j];
//            }
//        }
//    }
//    printf("%d",ans);
//    return 0;
//}