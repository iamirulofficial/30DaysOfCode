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
    //for uniqueness
    vector<string> newres;
    map<string,int> mr;
    for(int i=0;i<res.size();++i){
        if(mr.find(res[i]) == mr.end()){
            mr[res[i]] = i;
            newres.push_back(res[i]);
        }
    }
    for(auto &it:newres)
        cout<<it<<endl;
}