#include<iostream>
#include<vector>
using namespace std;
int main(){
int n;
cin>>n;
vector<int>arrival(n),leaving(n);
for(int i=0;i<n;i++){
	cin>>arrival[i];
}
for(int i=0;i<n;i++){
	cin>>leaving[i];
}
vector<pair<int,int>>times;
//First will tell current time
//Second will tell arrivalor leaving 
//-1 for arrival and 1 for leaving
for(int i=0;i<n;i++){
	times.push_back({arrival[i],-1});
	times.push_back({leaving[i],1});
}
int maxCustomer=0;
int currCustomer=0;
sort(times.begin(),times.end());
for(auto it:times){
	
	auto time=it.first;
	auto type=it.second;
	if(type==-1){//New customer come
        currCustomer++;
        maxCustomer=max(maxCustomer,currCustomer);
	}else{
		currCustomer--;
	}
}
	cout<<maxCustomer<<endl;
return 0;

}