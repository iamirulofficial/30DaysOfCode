//
// Created by Edwin Jarvis on 1/31/2021.
//
#include <bits/stdc++.h>
using namespace std;
long long chckfn(long long n){
    int i=0;
    for (i = 2; i <= n; ++i) {
        if (n % i == 0) {
            //cout << i << endl;
            break;
        }
    }
    return i;
}
int main(){
    int t; cin>>t;
    while(t--){
        long long n,k,fn,i;
        cin>>n>>k;
        while(k--) {
            n += chckfn(n);
        }
        cout<<n<<endl;
    }
}
