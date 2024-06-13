#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int no;
	for(int i=0;i<n;i++){
		no=1;
		for(int j=0;j<2*n+1;j++){
			if(i+j>=n-1 and i+n-1>=j){
				cout<<no;
				no++;
			}else{
				cout<<" ";
			}
		}
		cout<<endl;
	}
	return 0;
}