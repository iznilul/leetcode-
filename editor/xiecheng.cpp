//
// Created by Administrator on 2021/4/1.
//
//#include <iostream>
//#include <vector>
//#include <string>
//using namespace std;
//
//int main(){
//    string s;
//    vector<string> v;
//    int i=0;
//    while(cin>>s){
//        v.emplace_back(s);
//        if(i>0)
//            if(v[i-1]=="from")
//                cout<<s<<endl;
//        i++;
//    }
//    return 0;
//}

#include <iostream>
#include <vector>
#include <cstring>
#include <sstream>
#include <algorithm>
using namespace std;
vector<vector<int>> subsetsWithDup(vector<int> &nums) {
    sort(nums.begin(), nums.end());
    vector<vector<int>> ans;
    vector<int> t;
    int n = nums.size();
    for (int mask = 0; mask < (1 << n); ++mask) {
        t.clear();
        for (int i = 0; i < n; ++i) {
            if (mask & (1 << i)) {
                t.push_back(nums[i]);
            }
        }
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    char s[10000];
    int ans=0;
    int a;
    vector<vector<int>> package;
    vector<int> price(n);
    vector<int> value(n);
    for(int i=0;i<n;i++){
        vector<int> v;
        cin>>s;
        stringstream sstr(s);
        string token;
        while(getline(sstr, token, ','))
        {
            v.emplace_back(atoi(token.c_str()));
        }
        package.emplace_back(v);
    }
    for(int i=0;i<n;i++) {
        cin>>a;
        price.emplace_back(a);
    }
    for(int i=0;i<n;i++) {
        cin>>a;
        value.emplace_back(a);
    }
    vector<vector<int>> subsets=subsetsWithDup(value);
    for(int i=0;i<package.size();i++){
        for(int j=0;j<subsets.size();j++){
            if(package[i]==subsets[j]){
                ans+=price[i];
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}
