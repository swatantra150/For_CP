#include<iostream>
#include<vector>
#include<cmath>
#include<set>
#include<map>
using namespace std;
int n;
vector<int>a(n);
int check(int mid){
	if(mid==n-1){
		return 1;
	}
	if(a[mid]>a[mid+1]){
		return 1;
	}else{
		return 0;
	}
}
int main(){

cin>>n;
a.resize(n);
for(int i=0;i<n;i++){
	cin>>a[i];
}

int lo=0;
int hi=n-1;
int ans=0;
while(lo<=hi){
	 int mid = lo + (hi - lo) / 2;
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