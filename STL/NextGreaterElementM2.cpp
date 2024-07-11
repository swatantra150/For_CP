#include<iostream>
#include<vector>
#include<cmath>
#include<set>
#include<map>
using namespace std;
int main(){

  int n;
  cin>>n;
  vector<int>a(n);
  for(int i=0;i<n;i++){
  	cin>>a[i];
  }
  vector<int>nge(n,-1);
  for(int i=n-1;i>=0;i--){
  	int next_idx=i+1;
  	while(next_idx<n and a[next_idx]<=a[i]){
  		next_idx=nge[next_idx];
  	}
  	nge[i]=next_idx;
  }
for (int i = 0; i <n; ++i)
{
	cout<<a[nge[i]]<<" ";
}
	
	return 0;
}