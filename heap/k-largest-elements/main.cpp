#include<bits/stdc++.h>
using namespace std;


int findKthLargest(vector<int>& nums, int k) {
        //min-heap
        priority_queue<int, vector<int>, greater<int>> minH;
        for(int i=0;i<nums.size();++i){
            minH.push(nums[i]);
            if(minH.size() > k){
                minH.pop();
            }
        }
        return minH.top();
    }

int main(){
    int n;
    cin>>n;
    vector<int> nums;
    for(int i=0;i<n;++i){
        cin>>nums[i];
    }
    int k;
    cin>>k;
    cout<<findKthLargest(nums,k);
}