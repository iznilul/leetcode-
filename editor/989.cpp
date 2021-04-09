//
// Created by Administrator on 2021/1/22.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using  namespace std;
vector<int> addToArrayForm(vector<int>& A, int K) {
    int length = A.size();
    vector<int> a;
    int pop;
    int flag=0;
    int sum;
    int i=length-1;
    while(K||i>=0||flag){
        pop=K?K%10:0;
        K=K?K/10:0;
        sum=i>=0?A[i]+pop + flag:pop+flag;
        i--;
        a.push_back(sum % 10);
        if(sum>=10)
            flag=1;
        else
            flag=0;
    }
    reverse(a.begin(), a.end());
    return a;
}
int main(){
    vector<int> v={2,1,5};
    int k=806;
    vector<int> v1=addToArrayForm(v, k);
    reverse(v1.begin(), v1.end());
    int length=v1.size();
    for (int i = 0; i < length; i++)
        printf("%d", v1[i]);
    return 0;
}