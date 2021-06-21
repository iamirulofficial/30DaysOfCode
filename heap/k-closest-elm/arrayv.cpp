#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int n,x,k; cin>>n>>x>>k;
	    vector<int> arr(n),arr2;
	    for(int i=0;i<n;++i){
	        cin>>arr[i];
	        //cout<<"it-x:"<<abs(arr[i]-x);
	        arr2.push_back(abs(arr[i]-x));
	    }
	    //6 = abs(t-7) 2 4 7 6 8
	    //6 5 3 0 1 1
	    sort(arr2.begin(),arr2.end());
	    //for(auto &it:arr2){
	       //cout<<"sort:"<<it<<" ";
	    //}
	    for(int i=0;i<n;++i){
	        if(abs(arr[i]-x) <= arr2[k-1]){
	            cout<<arr[i]<<" ";
	        }
	    }
	    
	    
	}
	return 0;
}