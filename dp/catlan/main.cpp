#include <iostream>
using namespace std;

int main() {
	// your code goes here
	//c0 = 1 cn = sum(ci + cn-i-1)
	
	int n;
	cin>>n;
	int cat[n] = {0};
	cat[0] = 1;
	for(int i=1;i<n;i++){
		//res += cat[i] + cat[n-i-1];
		for(int j=0;j<=i-1;++j){
			cat[i] += cat[j] * cat[i-j-1];
		}
	}
	cout<<cat[n-1];
	return 0;
}