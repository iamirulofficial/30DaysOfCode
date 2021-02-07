//
// Created by Edwin Jarvis on 2/7/2021.
//
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int p,q,i=0;
        cin>>p>>q;
        int u=0,d=0,r=0,l=0;
        string x;
        cin>>x;
        //cout<<x<<endl;
        while(x[i] != '\0'){
            if(x[i] == 'U')
                u++;
            if(x[i] == 'D')
                d++;
            if(x[i] == 'R')
                r++;
            if(x[i] == 'L')
                l++;
            i++;
        }
        //cout<<u<<d<<r<<l<<endl;
        int x_d = 0, y_d = 0;
        if(p>0 && r>=p)
            x_d=1;
        if(p<0 && l>=abs(p))
            x_d = 1;
        if(q>0 && u>=q)
            y_d = 1;
        if(q<0 && d>=abs(q))
            y_d = 1;
        if((x_d && y_d) || (p==0 && q==0))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
