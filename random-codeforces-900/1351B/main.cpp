//
// Created by Edwin Jarvis on 1/31/2021.
//
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int m,n,p,q,a,b,c,d;
        cin>>m>>n>>p>>q;
        a = max(m,n);
        b = max(p,q);
        c = min(m,n);
        d = min(p,q);
        if(a == b && c+d == a)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
