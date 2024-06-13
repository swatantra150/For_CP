#include<iostream>
using namespace std;
int main(){
	for(int i=0;i<10;i++){
		for(int j=0;j<10;j++){
			if(abs(i-5)+abs(j-5)<=4){
				cout<<"x";
			}else{
				cout<<" ";
			}
		}
		cout<<endl;
	}
	return 0;
}