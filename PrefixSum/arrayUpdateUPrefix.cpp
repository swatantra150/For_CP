#include<iostream>
using namespace std;
int main(){ 
	int n;
   cin>>n;
vector<int>arr(n);
for(int i=0;i<n;i++){
	cin>>arr[i];
}
vector<int>prefix(n,0);
int q;
cin>>q;
while(q--){
	int l,r,x;
	cin>>l>>r,x;
	prefix[l]+=x;
	if(r+1<n){
		prefix[r+1]=-x;
	}b 
}
for(int i=0;i<n;i++){
	if(i>0){
		prefix[i]+=prefix[i-1];
	}else{
		prefix[i]=prefix[i];
	}
}
for(int i=0;i<n;i++){
	if(i>0){
		prefix[i]=prefix[i-1]+arr[i];
	}else{
		prefix[i]=arr[i];
	}
}
for(int i=0;i<n;i++){
	cout<<prefix[i];
}
return 0;
}