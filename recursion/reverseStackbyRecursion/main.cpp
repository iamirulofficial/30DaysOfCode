#include<bits/stdc++.h>
using namespace std;

void insertAtLast(stack<int> &st, int x){
    if(st.size() == 0){
        st.push(x);
        return;
    }
    int temp = st.top();
    st.pop();
    insertAtLast(st,x);
    st.push(temp);
}
void revereseStack(stack<int> &st){
    if(st.size() == 1)
        return;
    int temp = st.top();
    st.pop();
    revereseStack(st);
    insertAtLast(st,temp);
}

int main(){

    stack<int> st;
    //for printing before operation because we have to pop while printing
    stack<int> dummy;
    int a;
    cin>>a;
    while(a!= -1){
        st.push(a);
        dummy.push(a);
        cin>>a;
    }
    cout<<"Before operation (Entered Input) :"<<endl;
     while(!dummy.empty()){
        cout<<dummy.top()<<" ";
        dummy.pop();
    }
    cout<<endl;
    cout<<"After operation:"<<endl;
    revereseStack(st);

    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
}