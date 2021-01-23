//
// Created by Edwin Jarvis on 1/23/2021.
//
#include <bits/stdc++.h>
using namespace std;

int main(){
    int x,n;
    cin>>n;
    if(n>0){
        cout<<n;
    }
    else{
        x = abs(n);
        //100003
        //10000
        //10003
        int l1 = x/10;
        int l2 = (x/100)*10 + x%10;
        if(l1<l2)
            cout<<-l1;
        else
            cout<<-l2;
    }
    return 0;
}

