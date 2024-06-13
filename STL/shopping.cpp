#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution{
public:
	int noOfItemBought(vector<int>prices,int q){
		int n=prices.size();
			vector<int>prefix(n);
        
       

        return 0;
	} 
};
int main(){
	int n,q;
	cin>>n>>q;
	vector<int>prices(n);
	vector<int>prefix(n);
	for (int i = 0; i <n; ++i){
		cin>>prices[i];
	   }
	for (int i = 0; i <n; ++i)
        {
        	if(i>0){
              prefix[i]=prefix[i-1]+prices[i];
        	}else{
        		prefix[i]=prices[i];
        	}
        }
         sort(prefix.begin(),prefix.end());
        while(q--){
        	int b;
        	cin>>b;
        	int ans=upper_bound(prefix.begin(), prefix.end(), b)-prefix.begin();
        	cout<<ans<<endl;
        }

	return 0;
}