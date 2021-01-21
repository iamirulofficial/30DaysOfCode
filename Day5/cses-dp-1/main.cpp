//
// Created by Edwin Jarvis on 1/21/2021.
//
#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main(){
    ll n;
    cin>>n;
    ll mod = 1e9 + 7;
    vector<ll> dp(n+1,0);
    dp[0] = 1;
    for(ll i=1;i<=n;++i){
        for(ll j=1;j<=6 && i-j >= 0;++j){
            (dp[i] += dp[i-j]) %= mod;
        }
    }
    cout<<dp[n];
}
