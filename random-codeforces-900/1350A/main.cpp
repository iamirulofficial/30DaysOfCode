//
// Created by Edwin Jarvis on 1/31/2021.
//
#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool check_prime(ll int x){ bool prime = true; if(x == 1 || x == 0) return false; else{ for (int i = 2; i <= x / 2; ++i) { if (x % i == 0) { prime = false; break; } } } return prime; }
long long chckfn(long long n){
    long long i=0;
    if(check_prime(n))
        return n;
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
        if(!n%2)
            cout<<n + 2*k<<endl;
        else
            cout<<n + 2*(k-1) + chckfn(n)<<endl;
    }
}
