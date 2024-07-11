#include<iostream>
#include<vector>
#include<cmath>
#include<set>
#include<map>
#include<stack>
using namespace std;
int main(){

   int n;
   cin>>n;
   vector<int>a(n,0);
   for(int i=0;i<n;i++){
   	cin>>a[i];
   }
   stack<int>st;
   vector<int>nge(n,-1);
  for(int i=n-1;i>=0;i--){
  	while(!st.empty() and a[st.top()]<=a[i]){
  		st.pop();
  	}
  if(!st.empty()){
  	nge[i]=st.top();
  } else{
  	nge[i]=-1;
  }
  st.push(i);
  }
for(int i=0;i<n;i++){
	cout<<nge[i]<<" ";
}

	return 0;
}