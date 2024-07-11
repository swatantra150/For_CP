#include<iostream>
#include<vector>
#include<cmath>
#include<set>
#include<map>
#include<algorithm>
#define int long long
using namespace std;
int n,k;
int total=0;
vector<int>a,pre;
int numZero(int l,int r){
    int ans=(r-l+1)-(pre[r]-(l>0?pre[l-1]:0));
    return ans;
}
int check(int st,int mid){
    return numZero(st,mid)<=k;
}
signed main(){
cin>>n>>k;
a.resize(n);
pre.resize(n);
for(int i=0;i<n;i++){
    cin>>a[i];
}
pre[0]=a[0];
for(int i=1;i<n;i++){
    pre[i]=pre[i-1]+a[i];
}
for(int st=0;st<n;st++){
    int lo=st;
    int hi=n-1;
    int ans=st-1;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(check(st,mid)==1){
            ans=mid;
            lo=mid+1; 
        }else{
            hi=mid-1;  
        }
    }
    total+=ans-(st-1);
}

cout<<total<<endl;
    
    return 0;
}