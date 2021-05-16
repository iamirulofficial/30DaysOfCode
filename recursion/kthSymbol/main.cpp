#include<bits/stdc++.h>
using namespace std;

bool kthSymbol(int n, int k){
    if(n==1 || k==1){
        return 0;
    }
    int len = pow(2,n-1);
    if(k <= len/2)
        return kthSymbol(n-1,k);
    return !kthSymbol(n-1,k-(len/2));
}
int main(){
    int t; cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        cout<<kthSymbol(n,k)<<endl;
    }
}