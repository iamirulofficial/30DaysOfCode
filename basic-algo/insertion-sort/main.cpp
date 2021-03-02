//
// Created by Edwin Jarvis on 2/14/2021.
//

#include<bits/stdc++.h>

using namespace std;

void insertion_sort(vector<int> &v){
    //key
    //check key switch
    //9 8 6 7 2 5
    int i,key;
    for(int j=1;j<v.size();++j){
        key = v[j];
        i = j-1;
        while(i>=0 && v[i]>key){
            v[i+1] = v[i];
            i--;
        }
        v[i+1] = key;
    }
}

int main(){
    vector<int> v;
    int a; cin>>a;
    while(a != -1){
        v.push_back(a);
        cin>>a;
    }
    insertion_sort(v);
    for(auto& i:v)
        cout<<i<<" ";
}
