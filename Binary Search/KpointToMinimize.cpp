#include<iostream>
#include<vector>
#include<cmath>
#include<set>
#include<algorithm>
#include<map>
#define int long long
using namespace std;
int n,k;
vector<int>a;
int check(int mid){
	int needed=0;
    for(int i=1;i<n;i++){
    	needed+=(((a[i]-a[i-1])+mid-1)/mid)-1;
    }
    if(needed<=k){
    	return 1;
    }
    return 0;
}
signed main(){
cin>>n>>k;
a.resize(n);
for(int i=0;i<n;i++){
	cin>>a[i];
}
int lo=1,hi=0;
sort(a.begin(),a.end());
for(int i=1;i<n;i++){
  hi=max(hi,a[i]-a[i-1]);
}
int ans=-1;
while(lo<=hi){
	int mid=lo+(hi-lo)/2;
	if(check(mid)==1){
		ans=mid;
		hi=mid-1;
	}else{
		lo=mid+1;
	}
}
cout<<ans<<endl;
	
	return 0;
}