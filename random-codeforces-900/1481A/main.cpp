#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        int x,y;cin>>x>>y;
        string s;cin>>s;
        int u=0,d=0,l=0,r=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='U')u++;
            else if(s[i]=='R')r++;
            else if(s[i]=='D')d++;
            else l++;
        }
        if(x > 0 && r >= x )x = 0;
        if(x < 0 && l >= -x )x = 0;
        if(y > 0 && u >= y )y = 0;
        if(y < 0 && d >= -y )y = 0;
        cout<<((!x && !y)?"YES":"NO")<<endl;
    }
}