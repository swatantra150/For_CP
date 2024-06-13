#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<26;j++){
			if(i%5==j%8 or i%5+j%8==8){
				cout<<char('a'+j);
			}else{
				cout<<" ";
			}
		}
		cout<<endl;
	}
	return 0;
}