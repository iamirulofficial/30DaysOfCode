//
// Created by Edwin Jarvis on 1/23/2021.
//
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int x,n,cnt2=0,cnt3=0;
        cin>>n;
        while (n%2 == 0){
            n /= 2;
            ++cnt2;
        }
        while(n%3 == 0){
            n /= 3;
            ++cnt3;
        }

        if(n==1 && cnt2 <= cnt3)
            cout<< 2*cnt3 - cnt2<<endl;
        else
            cout<<-1<<endl;

    }
}
