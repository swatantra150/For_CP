#include<iostream>
#include<vector>
#include<cmath>
#include<set>
#include<map>
#include <algorithm>
using namespace std;
int n,m,k;
vector<int>a,b;

int check(int mid){
	int cnt=0;
	for(int i=0;i<n;i++){
		cnt+=upper_bound(b.begin(),b.end(),mid-a[i])-b.begin();
	}
	if(cnt>=k){
		return 1;
	}
	return 0;
}


int main(){
cin>>n>>m>>k;
a.resize(n);
b.resize(m);
for(int i=0;i<n;i++){
	cin>>a[i];
}
for (int i = 0; i <m; ++i){
	cin>>b[i];
}
sort(a.begin(),a.end());
sort(b.begin(),b.end());
if(n>m){
	swap(a,b);
}
int lo=0;
int hi=a[n-1]+b[n-1];
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