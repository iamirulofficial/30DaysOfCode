#include<bits/stdc++.h>
using namespace std;
void towerOfHanoi(int s,int d,int m,int n){
    if(n == 1){
        cout<<"Move "<<n<<" from "<<s<<" to "<<d<<endl;
        return;
    }
    towerOfHanoi(s,m,d,n-1);
    cout<<"Move "<<n<<" from "<<s<<" to "<<d<<endl;

    towerOfHanoi(m,d,s,n-1);
}
int main(){
    int n; cin>>n;
    
    int s=1,m=2,d=3;
    towerOfHanoi(s,d,m,n);
}