#include <bits/stdc++.h>
using namespace std;

vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> freq;
        vector<int> res;
        for(int i=0;i<nums.size();++i){
            freq[nums[i]]++;
        }
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> minH;
        for (auto x : freq){
            minH.push({x.second,x.first});
            if(minH.size()>k){
                minH.pop();
            }
            
        }
        while(!minH.empty()){
            res.push_back(minH.top().second);
            minH.pop();
        }
      //cout << x.first << " " << x.second << endl;
        return res;
    }

int main() {
	// your code goes here
	int n,k;
	cin>>n>>k;
	vector<int> nums(n);
	for(auto &it:nums)
		cin>>it;
	vector<int> res = topKFrequent(nums, k);
	for(auto &it:res)
		cout<<it<<" ";
	return 0;
}