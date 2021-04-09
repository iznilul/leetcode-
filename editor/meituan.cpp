//
// Created by Administrator on 2021/3/27.
//

//#include <iostream>
//#include <climits>
//using namespace std;
//int jugde(string s){
//    int len=s.length();
//    int count=0;
//    int index=INT_MAX;
//    for(int i=0;i<(len+1)/2;i++) {
//        if (count > 1) {
//            index=INT_MAX;
//            break;
//        }
//        else if (s[i] != s[len - 1 - i]) {
//            count++;
//            index=i;
//        }
//    }
//    return index;
//}
//int main(){
//       int T,n;
//       string wood;
//       scanf("%d",&T);
//       for(int i=0;i<T;i++){
//           scanf("%d",&n);
//           cin>>wood;
//           int index=jugde(wood);
//           if(index!=INT_MAX){
//               int mirror=n-1-index;
//               if(wood[index]-'0'<wood[mirror]-'0'){
//                    wood[mirror]=wood[index];
//               }else if(wood[index]-'0'>wood[mirror]-'0'){
//                   wood[index]=wood[mirror];
//               }
//                cout<<wood<<endl;
//           }else{
//                int left=0;
//                while(wood[left]=='0')
//                    left++;
//                if(left<n){
//                    wood[left]='0';
//                }
//                cout<<wood<<endl;
//           }
//       }
//       return 0;
//}






//#include <iostream>
//using namespace std;
//int main(){
//    int n,c1,c2;
//    scanf("%d",&n);
//    scanf("%d",&c1);
//    scanf("%d",&c2);
//    int c=min(c1,c2);
//    int sum=0;
//    int judge=0;
//    string result;
//    cin>>result;
//    for(int i=n-1;i>=0;i--){
//        if(result[i]=='T'){
//            continue;
//        }
//        else{
//            if(++judge==3){
//                sum+=c;
//                judge=0;
//            }
//        }
//    }
//    printf("%d",sum);
//    return 0;
//}

//#include <iostream>
//using namespace std;
//int main(){
//    int n,m;
//    int q;
//    scanf("%d",&n);
//    scanf("%d",&m);
//    int a[n];
//    for(int i=0;i<n;i++)
//        scanf("%d",&a[i]);
//    for(int i=0;i<m;i++){
//        scanf("%d",&q);
//        int left=0,right=n-1;
//        while(left<=right){
//            if(a[left]!=q){
//                left++;
//                continue;
//            }
//            if(a[right]!=q){
//                right--;
//                continue;
//            }
//            break;
//        }
//        if(left<=right)
//            printf("%d %d\n",left+1,right+1);
//        else
//            printf("%d\n",0);
//    }
//}

//#include <iostream>
//#include <vector>
//using namespace std;
//int main(){
//    int n,k;
//    int ans=0;
//    cin>>n>>k;
//    vector<vector<int>> a(k,vector<int>(n,0));
//    for(int i=0;i<n;i++){
//        cin>>a[0][i];
//        ans=max(ans,a[0][i]);
//    }
//    for(int i=1;i<k;i++)
//        for(int j=0;j<n-i;j++){
//            a[i][j]=a[i-1][j]^a[i-1][j+1];
//            ans=max(ans,a[i][j]);
//        }
//    printf("%d",ans);
//    return 0;
//}


#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    int count=0;
    vector<int> v;
    int sum1=0;
    int sum2=0;
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            if(j%2==0)
                sum1+=a[j];
            else
                sum2+=a[j];
        }
        for(int j=i+1;j<n;j++){
            if(j%2==1)
                sum1+=a[j];
            else
                sum2+=a[j];
        }
        if(sum1==sum2){
            count++;
            v.push_back(i);
        }
        sum1=0,sum2=0;
    }
    printf("%d\n",count);
    int len=v.size();
    for(int i=0;i<len;i++){
        printf("%d%c", v[i], (i == len - 1) ? '\n' : ' ');
    }
    return 0;
    }
