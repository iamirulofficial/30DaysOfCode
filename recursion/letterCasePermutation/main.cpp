//by default ip is all small case
#include<bits/stdc++.h>
using namespace std;
vector<string> res;

void solve(string ip, string op){
    if(ip.length() == 0){
        //cout<<op<<" ";
        res.push_back(op);
        return;
    }
    string op1 = op;
    string op2 = op;
    if(isdigit(ip[0])){
        op.push_back(ip[0]);
        //op2.push_back(ip[0]);
        ip.erase(ip.begin()+0);
        solve(ip,op);
    }
    else{
        op1.push_back(tolower(ip[0]));
        op2.push_back(toupper(ip[0]));
        ip.erase(ip.begin()+0);
        solve(ip,op1);
        solve(ip,op2);
    }
    
    return;
}

int main(){
    string ip;
    cin>>ip;
    string op = "";
    solve(ip,op);

    for(auto &it:res)
        cout<<it<<endl;
}