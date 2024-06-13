#include<iostream>
using namespace std;
#define int long long
int MOD=1e9+7;
int binpow(int a,int n){
	if(n==0)return 1;
	if(n%2==1){
		return (a*binpow(a,n-1))%MOD;
	}
	else{
		int temp=binpow(a,n/2);
		return (temp*temp)%MOD;
	}
}
int inverse(int x){
	return(binpow(x,MOD-2));
}
signed main(){
	//a+b-c*d+e^f/g
	int a,b,c,d,e,f,g;
	cin>>a>>b>>c>>d>>e>>f>>g;
	int temp1=a+b;
	int temp2=c*d;
	int temp3=(temp1-temp2)%MOD;
	int temp4=binpow(e,f);
	int temp5=(temp4*inverse(g))%MOD;
	int temp6=(temp3+temp5)%MOD;
	int ans=(temp6%MOD+MOD)%MOD;
	cout<<ans<<endl;
	return 0;
}