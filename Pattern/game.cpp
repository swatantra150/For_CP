#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
      int n,m;
      cin>>n>>m;
      if(n<m){
      	cout<<"No"<<endl;
      }
    else if(m==n){
    	cout<<"Yes"<<endl;
    }
      else if(n%2==0 and m%2==0){
      	cout<<"Yes"<<endl;
      }
      else if(n%2!=0 and m%2==0){
      	cout<<"Yes"<<endl;
      }
   else if(n%2!=0 and m%2!=0){
   	cout<<"Yes"<<endl;
       }
       else {
            cout << "NO" << endl;  // This case covers when n is even and m is odd
        }
	}
	return 0;
}