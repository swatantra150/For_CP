#include<iostream>
using namespace std;


int main(){
   int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
   cin>>arr[i];
   }
  int prefix[n];
 for(int i=0;i<n;i++){
   prefix[i] = arr[i];
  if(i>0){
  	prefix[i]+=prefix[i-1];
   }
}
int q; 
cin>>q;
while(q--){
  int l,r;
   cin>>l>>r;
   int ans = prefix[r];
   if(l>0)ans-=prefix[l-1];
   cout<<ans<<endl;
}
return 0;
}