#include <bits/stdc++.h>
using namespace std;
bool clamp (pair<int,int> a, pair<int,int> b){
    if(a.first == b.first)
        return a.second<b.second;
}
int main() {
	//code
	int T; cin>>T;
	while(T--){
	    int N; cin>>N;
	    vector<int> arr(N);
	    unordered_map<int,int> freq;
	    for(int i=0;i<N;++i){
	        cin>>arr[i];
	        //freq[arr[i]]++;
	    }
	    for(int i=0;i<N;++i){
	        //cin>>arr[i];
	        freq[arr[i]]++;
	    }
	    priority_queue<pair<int,int>,clamp<pair<int,int>,pair<int,int>>> maxH;
	    for(auto it:freq){
	        maxH.push({it.second,it.first});
	    }
	    while(!maxH.empty()){
	        for(int i=0;i<maxH.top().first;++i)
	            cout<<maxH.top().second<<" ";
	        maxH.pop();
	    }
	    
	}
	return 0;
}