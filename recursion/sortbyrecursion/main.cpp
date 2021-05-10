#include<bits/stdc++.h>
using namespace std;
void insertLast(vector<int> &v, int x){
    if(v.size()==0 || x >= v[v.size()-1]){
        v.push_back(x);
        return;
    }
    int temp = v[v.size()-1];
    v.pop_back();
    insertLast(v,x);
    v.push_back(temp);
}
void sortbyRecursion(vector<int> &v){
    if(v.size()==1)
        return;
    int temp = v[v.size()-1];
    v.pop_back();
    sortbyRecursion(v);
    insertLast(v,temp);
}
int main(){
    vector<int> vect;
    int a;
    cin>>a;
    while ((a != -1)){
        vect.push_back(a);
        cin>>a;
    }
    {
        /* code */
    }
    
    
    //   for(int i=0;i<vect.size();++i)
    //     cout<<vect[i]<<" ";

    sortbyRecursion(vect);

    for(int i=0;i<vect.size();++i)
        cout<<vect[i]<<" ";
}