#include<iostream>
#include<vector>
#include<cmath>
#include<set>
#include<map>
using namespace std;
int main(){

    int n;
    cin>>n;
    int k;
    cin>>k;
    vector<int>a(n+1);
    vector<bool>done(n+1,0);
 for(int i=1;i<=n;i++){
 	cin>>a[i];
 }
 int min_move=0;
 for(int i=1;i<=n;i++){
 	
 	if(!done[i]){
       int curr=a[i];
       int num_element=1;
       while(curr!=i){
       	done[curr]=1;
       	curr=a[curr];
       	num_element++;
       }
       done[curr]=1;
       min_move+=num_element-1;
 	}
 }
   if(k>=min_move and min_move%2==k%2){
   	  cout<<"Yes"<<endl;
   }else{
   	cout<<"NO"<<endl;
   }

	return 0;
}