#include<bits/stdc++.h>
using namespace std;

void delMid(stack<int> &st, int k){
    if(k==1){
        st.pop();
        return;
    }
    int temp = st.top();
    st.pop();
    delMid(st,k-1);
    st.push(temp);
}
int main(){
    // statck 5 2 3 0 1
    stack<int> st;
    st.push(1);
    st.push(0);
    st.push(3);
    st.push(2);
    st.push(5);
    int k = st.size() / 2 + 1;
    delMid(st,k);
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
}