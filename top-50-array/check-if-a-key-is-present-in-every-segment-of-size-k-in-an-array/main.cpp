#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    int x,k;
    cin>>x>>k;
    vector<int> arr(n);
    int i=0;
    for(i=0;i<n;++i)
        cin>>arr[i];
    int flag;
    for(int i=0;i<n;i += k){
        flag=0;
        for(int j=i;j<i+k;++j){
            if(arr[j] == x){
                //continue;
                flag=1;
            }
        }
        if(flag==0)
        break;
    }
    if(flag)
    cout<<"Y";
    else
    cout<<"N";

}
