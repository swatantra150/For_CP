#include<iostream>
#include<vector>
#include<map>
using namespace std;
int main(){
	int n,k;
	cin>>n>>k;
    vector<int>a(n,0);
    for(int i=0;i<n;i++){
    	cin>>a[i];
    }
    map<int,int>mt;
    for(int i=0;i<n;i++){
    	mt[a[i]]++;
    	if(i-k>=0){
            if(--mt[a[i-k]]==0){
    		mt.erase(mt.find(a[i-k]));
        }
    	}
    	if(i>=k-1){
    		cout<<mt.size()<<" ";
    	}
    }
    return 0;
}