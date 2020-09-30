//Problem Link: https://practice.geeksforgeeks.org/problems/subarray-with-given-sum/0
#include<bits/stdc++.h>
using namespace std;

int main(){
	int test;
	cin>>test;
	while(test--){
		int n,s;
		cin>>n>>s;
		int arr[n],i=0;
		for(int i=0;i<n;i++)
			cin>>arr[i];
		int flag=1,last=0;
		int tmp[n];
		for(int i=0;(i<n) && flag;i++){
			int t=0;
			int p=s;
			for(int j=i;j<n;j++,t++){
				p = p - arr[j];
				tmp[t] = j+1;
				if(p < 0){
					break;
				}
				else if(p == 0){
					last = t;
					flag = 0;
					break;
				}
			}
		}
		
		if(flag)
			cout<<-1;
		else{
			cout<<tmp[0]<<" "<<tmp[last];
		}
		cout<<endl;
	}
}
