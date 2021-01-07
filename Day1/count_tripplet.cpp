//https://practice.geeksforgeeks.org/problems/count-the-triplets4615/1
// { Driver Code Starts
//re_init
#include <bits/stdc++.h>
using namespace std;



 // } Driver Code Ends


//User function template for C++
class Solution{
public:	
	int countTriplet(int arr[], int n)
	{
	    // Your code goes here
	    sort(arr,arr+n);
	    int count=0,t=0;
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                        if(i != j){
                                t = arr[i] + arr[j];
                                if(binary_search(arr,arr+n,t)){
                                                count++;
                                }
                        }
                }
            }
            return count/2;
	}
};

// { Driver Code Starts.


int main() 
{
   	
   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int arr[n];
        for(int i = 0; i < n; i++)
        	cin >> arr[i];

        Solution ob;
        cout << ob.countTriplet(arr, n) << "\n";

    }

    return 0;
}  // } Driver Code Ends
