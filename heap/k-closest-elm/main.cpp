#include <bits/stdc++.h>
using namespace std;

int main() {
	int T; cin>>T;
	while(T--){
	    int n,x,k;
	    cin>>n>>x>>k;
	    std::vector<int> arr(n);
	    std::vector<pair<int,int>> keyarr;
	    for(auto &it:arr){
	        cin>>it;
	        keyarr.push_back({abs(it-x),it});
	    }
	    //for(auto &it:keyarr){
	      //  cout<<it.first<<" "<<it.second<<" ";
	    //}
	    //cout<<endl;
	    priority_queue<pair<int,int>> maxH;
	    for(int i=0;i<n;++i){
	        maxH.push(keyarr[i]);
	        if(maxH.size() > k){
	            maxH.pop();
	        }
	    }
	    while(!maxH.empty()){
	        cout<<maxH.top().second<<" ";
	        maxH.pop();
	    }
	}
	return 0;
}