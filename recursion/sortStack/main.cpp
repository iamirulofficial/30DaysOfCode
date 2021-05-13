#include <bits/stdc++.h>
using namespace std;

void insertLast(stack<int> &v, int x){
    if(v.size()==0 || x >= v.top()){
        v.push(x);
        return;
    }
    int temp = v.top();
    v.pop();
    insertLast(v,x);
    v.push(temp);
}
void sortStack(stack<int> &v){
    if(v.size()==1)
        return;
    int temp = v.top();
    v.pop();
    sortStack(v);
    insertLast(v,temp);
}
int main(){
    stack<int> st;
    st.push(5);
    st.push(2);
    st.push(6);
    st.push(1);
    sortStack(st);
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }

}