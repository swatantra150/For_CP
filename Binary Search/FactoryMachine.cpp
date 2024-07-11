#include<iostream>
#include<vector>
#include<cmath>
#include<set>
#include<map>
using namespace std;
#define int long long
int n,t;
vector<int>a;
int check(int mid){
	int total_product=0;
	for(int i=0;i<n;i++){
		total_product+=mid/a[i];
	}
	if(total_product>=t)return 1;
	return 0;
}
signed main(){

cin>>n>>t;
a.resize(n);
for(int i=0;i<n;i++){
	cin>>a[i];
}
int lo=0;
int hi=t*a[0];
int ans=-1;
while(lo<=hi){
	int mid=lo+((hi-lo)/2);
	if(check(mid)==1){
		ans=mid;
		hi=mid-1;
	}else{
		lo=mid+1;
	}
}
cout<<ans;

	return 0;
}