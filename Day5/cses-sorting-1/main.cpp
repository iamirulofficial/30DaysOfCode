//
// Created by Edwin Jarvis on 1/21/2021.
//
#include<bits/stdc++.h>

using namespace std;
#define ll long long
int main(){
    ll n,a;
    cin>>n;
    set<ll> s1;
    for(int i=0;i<n;++i){
        cin>>a;
        s1.insert(a);
    }
    cout<<s1.size();
}
