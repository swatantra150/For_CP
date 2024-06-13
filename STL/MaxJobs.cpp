#include<iostream>
#include<vector>
using namespace std;
using lli=long long;
int main(){
	vector<pair<lli,lli>>jobs;
	lli n;
	cin>>n;
	//First is start
	//Second is ending time
	for(lli i=0;i<n;i++){
		lli s;
		lli e;
		cin>>s>>e;
		jobs.push_back({s,e});
	}
	sort(jobs.begin(),jobs.end(),[](pair<lli,lli>a,pair<lli,lli>b){
		return a.second<b.second;
	});
	 lli job_done=0;
	 lli finish_time=0;//time of the last job
	 for(auto job:jobs){
	 	auto start =job.first;
	 	auto end =job.second;
	 	if(start>finish_time){
             job_done++;
             finish_time=end;
	 	}
	 }
	 cout<<job_done<<endl;
	return 0;
}