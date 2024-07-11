#include<iostream>
#include<vector>
#include<cmath>
#include<set>
#include<map>
#include<algorithm>
#define int long long
using namespace std;
int n,k;
vector<int>a;
int check(int mid){
	 multiset<int> mt;
    int zero_count = 0;
    for (int i = 0; i < n; i++) {
        mt.insert(a[i]);
        if (a[i] == 0) zero_count++;
        if (i >= mid) {
            if (a[i - mid] == 0) zero_count--;
            mt.erase(mt.find(a[i - mid]));
        }
        if (mt.size() == mid && zero_count <= k) {
            return 1;
        }
    }
    return 0;
}
signed main(){
cin>>n>>k;
a.resize(n);

for(int i=0;i<n;i++){
	cin>>a[i];
}

int lo=0;
int hi=n-1;
int ans=-1;
while(lo<=hi){
	int mid=lo+(hi-lo)/2;
	if(check(mid)==1){
		ans=mid;
		lo=mid+1;
	}else{
		hi=mid-1;
	}
}

cout<<ans;

	
	return 0;
}
