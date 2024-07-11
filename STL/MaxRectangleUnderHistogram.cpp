#include<iostream>
#include<vector>
#include<cmath>
#include<set>
#include<map>
using namespace std;
int main(){

int n;
cin>>n;
int area=0,peri=0;
vector<int>a(n,0);
for(int i=0;i<n;i++){
	cin>>a[i];
}
vector<int>nsm(n);
vector<int>psm(n);
for(int i=0;i<n;i++){
	int val=i-1;
	while(val!=-1 and a[val]>=a[i]){
		val=psm[val];
	}
	psm[i]=val;
}
	for(int i=n-1;i>=0;i--){
    int val=i+1;
    while(val!=n and a[val]>=a[i]){
    	val=nsm[val];
    }
    nsm[i]=val;
	}
	for(int i=0;i<n;i++){
		int width=nsm[i]-psm[i]-1;
		int height=a[i];
		area=max(area,height*width);
		peri=max(peri,2*(height+width));
	}
   cout<<area<<endl<<peri<<endl;
	return 0;
}