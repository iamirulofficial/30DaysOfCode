//
// Created by Edwin Jarvis on 2/14/2021.
//
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m,k;
    cin>>n>>m>>k;
    vector<int> a(n),b(m);
    for(int i=0;i<n;++i) cin>>a[i];
    for(int j=0;j<n;++j) cin>>b[j];
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());

    int i=0,j=0,c=0;

    while(i<n && j<m){
        if(a[i] + k < b[j]) i++;
        else if(a[i] - k > b[j]) j++;
        else{
            i++;
            j++;
            c++;
        }
    }
    cout<<c;

}
