#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool compare(pair<int,int> p1,pair<int,int> p2){
	return p1.second<p2.second;
}

int main() {

  //t testcases
	int t;  cin>>t;
	while(t--){
    int n,s,e;
    //n number of activities
	  cin>>n;
	  vector<pair<int,int>> v;
    
	  for(int i=0;i<n;i++){
      // s starting point , e ending point
       cin>>s>>e;
	     v.push_back(make_pair(s,e));
	  }
    
	  sort(v.begin(),v.end(),compare);
    int fin=v[0].second;
	  int ans=1;
	  for(int i=1;i<n;i++){
		  if(fin<=v[i].first){
			  ans++;
			  fin=v[i].second;
		  }
	  }
    
    // total num of activities that can be performed
	  cout<<ans<<endl;
	}
  
	return 0;
}
