#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<4*n+5;j++){
			if(i+j%6==n-1 or i==j%6){
				cout<<"X";
			}else{
				cout<<" ";
			}
		}
		cout<<endl;
	}
	return 0;
}