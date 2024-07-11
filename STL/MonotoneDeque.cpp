#include<iostream>
#include<vector>
#include<cmath>
#include<set>
#include<map>
#include<deque>
using namespace std;
class monotoneDeque{
public:
	deque<int>dq;
	void insert(int x){
		while(!dq.empty() and dq.back()>x){
			dq.pop_back();
		}
		dq.push_back(x);
	}
   void remove(int x){
   	if(dq.front()==x){
   		dq.pop_front();
   	  }
   }
   int getMin(){
   	return dq.front();
   }
};
int main(){

int n,k;
cin>>n>>k;
vector<int>a(n,0);
for (int i = 0; i <n; ++i)
{
	cin>>a[i];
}
monotoneDeque dq;
for(int i=0;i<n;i++){
	dq.insert(a[i]);
	if(i-k>=0){
		dq.remove(a[i-k]);
	}
	if(i>=k-1){
		cout<<dq.getMin()<<" ";
	}
}




	
	return 0;
}