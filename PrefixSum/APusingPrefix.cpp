#include<iostream>
#include<vector>
using namespace std;
int main(){
	int n;
	cin>>n;
	vector<int>p(n,0);
	vector<int>q(n,0);
	int query;
	cin>>query;
	while(query--){
		int a,d,l,r;
		cin>>a>>d>>l>>r;
		p[l]+=a-d*l;
       if(r+1<n){
       	p[r+1]-=a-d*l;
       }
       q[l]+=d;
       if(r+1<n){
       	q[r+1]-=d;
       }
	}
	for(int i=0;i<n;i++){
		p[i]+=p[i-1];
		q[i]+=q[i-1];
	}
	for(int i=0;i<n;i++){
		cout<<p[i]+i*q[i]<<" ";
	}
	return 0;
}