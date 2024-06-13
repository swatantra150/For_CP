#include<iostream>
#include<vector>
using namespace std;
int main(){
	int n;
	cin>>n;
	vector<int>prefix(n,0);
	for(int i=0;i<n;i++){
		cin>>prefix[i];
	}
	int q;
	cin>>q;
	while(q--){
		int l,r;
		cin>>l>>r;
		prefix[l]++;
		if(r+1<n)prefix[r+1]--;
	}
	//Step 2 To calculate the prefix array
	vector<int>cnt(q,0);
	for(int i=0;i<q;i++){
		cnt[prefix[i]]++;
	}
	//Step 3 To calculate the suffix array
	for(int i=q-1;i>=0;i++){
		cnt[i]+=cnt[i+1];
	}
	for(int i=1;i<q;i++){
		cout<<cnt[i]<<" ";
	}
	return 0;
}