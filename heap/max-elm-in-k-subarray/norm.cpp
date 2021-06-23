/ { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution
{
    public:
    //Function to find maximum of each subarray of size k.
    vector <int> max_of_subarrays(int *arr, int n, int k)
    {
        // your code here
        priority_queue<int> maxH;
        vector<int> res;
        for(int i=0;i<n-k+1;++i){
            int maxN=0;
            for(int j=i;j<i+k;++j){
                maxN = max(maxN,arr[j]);
                //cout<<maxN<<" ";
            }
            
            res.push_back(maxN);
        }
        /*
        for(int i=0;i<n;++i){
            maxH.push(arr[i]);
            if(maxH.size() == k){
                res.push_back(maxH.top());
                for(int j=0;j<k;++j){
                    maxH.pop();
                }
                i = k-i;
            }
        }*/
        return res;
    }
};

// { Driver Code Starts.

int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    
	    int n, k;
	    cin >> n >> k;
	    
	    int arr[n];
	    for(int i = 0;i<n;i++) 
	        cin >> arr[i];
	    Solution ob;
	    vector <int> res = ob.max_of_subarrays(arr, n, k);
	    for (int i = 0; i < res.size (); i++) 
	        cout << res[i] << " ";
	    cout << endl;
	    
	}
	
	return 0;
}  // } Driver Code Ends