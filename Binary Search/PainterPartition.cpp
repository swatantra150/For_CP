#include<iostream>
#include<vector>
#include<cmath>
#include<set>
#include<map>
using namespace std;
#define int long long
int n,k;
vector<int>a;
int check(int mid){
	int last_person_time_left=0;
	int num_painter_spawned=0;
	for(int i=0;i<n;i++){
		if(last_person_time_left>=a[i]){
			last_person_time_left-=a[i];
		}else{
			num_painter_spawned++;
			if(num_painter_spawned>k){
				return 0;
			}
			last_person_time_left=mid;
			if(last_person_time_left>=a[i]){
				last_person_time_left-=a[i];
			}else{
				return 0;
			}
		}
	}
	return 1;
}
signed main(){
cin>>n>>k;
a.resize(n);
int sum=0;
for(int i=0;i<n;i++){
	cin>>a[i];
	sum+=a[i];
}
int lo=0;
int hi=sum;
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