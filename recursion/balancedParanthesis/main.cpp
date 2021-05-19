//that
//input == n
//output == balanced paranthesis
//input = 3,
//open = 3, close=3
//
#include<bits/stdc++.h>
using namespace std;

void balancedParanthesis(int open, int close, string op ){
    if(open == 0 && close==0){
        cout<<op<<endl;
        return;
    }
    
    
    if(open != 0){
        string op1 = op;
        op1.push_back('(');
        //balance=0;
        //open--;
        balancedParanthesis(open-1,close,op1);
    }

    if(close > open){
        string op2 = op;
        op2.push_back(')');
        //open--;
        balancedParanthesis(open,close-1,op2);
    }
    
    return;
}
int main(){
    string op = "";
    balancedParanthesis(3,3,op);
    //cout<<"abc"<<endl;
    return 0;
}