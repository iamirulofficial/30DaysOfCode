#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	//code
	int T; cin>>T;
	while(T--){
	    int n,k;
	    cin>>n>>k;
	    vector<int> arr(n);
	    vector<int> res;
	    for(auto &it:arr)
	        cin>>it;
	    //for(auto &it:arr)
	     //   cout<<it;

	     
	     priority_queue<int,vector<int>,greater<int>> minH;
	     for(auto &it:arr){
	         minH.push(it);
	         if(minH.size() > k){
	             res.push_back(minH.top());
	             minH.pop();
	         }
	     }
	     while(!minH.empty()){
	         res.push_back(minH.top());
	         minH.pop();
	     }
	     for(auto &it:res)
	        cout<<it<<" ";
	    cout<<endl;
	}
	return 0;
}