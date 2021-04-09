//
// Created by Administrator on 2021/2/1.
//
#include <iostream>
#include <vector>
#include <numeric>
#include <cstring>
#include <unordered_set>

using namespace std;
#define HARSH_TABLE_MAX_SIZE   (100000) // 哈希数组的最大元素个数

// 定义一个哈希表的节点
//struct HarshNode
//{
//    string sKey;   // [sKey,nvalue]是一对键值对
//    int nValue;
//    HarshNode *pNext;
//    HarshNode():sKey(""),nValue(NULL),pNext(nullptr){}
//    HarshNode(char* s,int x):sKey(s),nValue(x),pNext(nullptr){}
//    HarshNode(char* s,int x,HarshNode* next):sKey(s),nValue(x),pNext(next){}
//};
class Solution {
public:
    vector<int> fairCandySwap(vector<int>& A, vector<int>& B) {
        vector<int> C;
        int sumA ;
        int sumB ;
        int x;
        sumA = accumulate(A.begin(), A.end(), 0);
        sumB = accumulate(B.begin(), B.end(), 0);
        int difference=(sumA-sumB)/2;
        unordered_set<int> set(A.begin(), A.end());
        for(auto i:B){
            x=i+difference;
            if (set.count(x)) {
                C={x,i};
                break;
            }
        }
        return C;
    }
};
int main(){
    Solution solution;
    vector<int> a={1,2,5};
    vector<int> b={2,4};
    vector<int> c = solution.fairCandySwap(a, b);
    for(int i:c){
        printf("%d ",i);
    }
}
//vector<int> fairCandySwap(vector<int>& A, vector<int>& B) {
//    int sumA ;
//    int sumB ;
//    sumA = accumulate(A.begin(), A.end(), 0);
//    sumB = accumulate(B.begin(), B.end(), 0);
//    vector<int> C;
//    int difference = (sumA - sumB) / 2;
//    for (int i:A){
//        for (int j:B) {
//            if (i - j == difference) {
//                C.push_back(i);
//                C.push_back(j);
//                return C;
//            }
//        }
//    }
//    return C;
//}