#include<iostream>
#include<vector>
#include<map>
using namespace std;
using lli =long long;
int main(){
	lli n;
	cin>>n;
	vector<lli>song(n);
	for(lli i=0;i<n;i++){
		cin>>song[i];
	}
    lli maxLength=0;
	lli left=0,right=0;
	map<lli,lli>lastOccurence;
	for(lli right=0;right<n;right++){
		//song[i] is the current song 
		auto it=lastOccurence.find(song[right]);
		if(it!=lastOccurence.end()){
			left = max(left, lastOccurence[song[right]] + 1);
		}
		lastOccurence[song[right]]=right;
        maxLength=max(maxLength,right-left+1);
	}
	cout<<maxLength<<endl;
	return 0;
}