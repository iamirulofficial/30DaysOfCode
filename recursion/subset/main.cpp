#include<bits/stdc++.h>
using namespace std;
void solve(string ip, string op, vector<string> &res){
    if(ip.length() == 0){
        //cout<<op<<" ";
        res.push_back(op);
        return;
    }
    string op1 = op;
    string op2 = op;
    op2.push_back(ip[0]);
    ip.erase(ip.begin()+0);
    solve(ip,op1,res);
    solve(ip,op2,res);
    return;
}
int main(){
    string ip;
    cin>>ip;
    string op = "";
    vector<string> res;
    solve(ip,op,res);
    for(auto &it:res)
        cout<<it<<endl;
}