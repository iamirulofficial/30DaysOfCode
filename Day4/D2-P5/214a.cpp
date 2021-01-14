//
// Created by Edwin Jarvis on 1/14/2021.
//
//iamirulchef : submission at 11:31 code at 06:30
#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll compute_hash(string const& s) {
    const int p = 31; const int m = 1e9 + 9; ll hash_value = 0; ll p_pow = 1;
    for (char c : s) { hash_value = (hash_value + (c - 'a' + 1) * p_pow) % m; p_pow = (p_pow * p) % m; }
    return hash_value;
}
bool binSearch(int arr[],int size,int key){ sort(arr, arr+size); return binary_search(arr, arr+size, key); }
bool isPowerOfTwo(ll x){ if(x==0) return false; return (ceil(log2(x)) == floor(log2(x))); }
ll binpow(ll a, ll b){ ll res = 1; while (b > 0) { if (b & 1) res = res * a; a = a * a; b >>= 1; } return res; }
bool check_prime(ll int x){ bool prime = true; if(x == 1 || x == 0) return false; else{ for (int i = 2; i <= x / 2; ++i) { if (x % i == 0) { prime = false; break; } } } return prime; }
ll mod(ll x){ return (x<0)?(-1*x):x; }
ll gcd (ll a, ll b){ return b ? gcd (b, a % b) : a; }
int C(int n, int k) { double res = 1; for (int i = 1; i <= k; ++i) res = res * (n - k + i) / i; return (int)(res + 0.01); }
void problem_code(){
	//hulk smash
	int m,n,ans=0;
	cin>>m>>n;
	for(int i=0;i<=1000;++i){
	    for(int j=0;j<=1000;++j){
	        if(i*i + j == n && i + j*j == m)
	            ans++;
	    }
	}
	cout<<ans;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    //int testcase; cin >> testcase;
    //for (int t = 0; t < testcase; ++t)
        problem_code();
}
