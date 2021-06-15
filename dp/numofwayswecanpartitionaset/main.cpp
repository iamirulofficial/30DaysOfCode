//number of ways to partition a set
// If this is first column of current row 'i'
//If j == 0
   // Then copy last entry of previous row
   // Note that i'th row has i entries
  // Bell(i, j) = Bell(i-1, i-1) 

// If this is not first column of current row
//Else 
   // Then this element is sum of previous element 
   // in current row and the element just above the
   // previous element
  // Bell(i, j) = Bell(i-1, j-1) + Bell(i, j-1)
  //
  //1
  //1 2
  //2 3 5
  //5 7 10 15
  //15 20 27 52
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	int bell[n+1][n+1];
	bell[0][0] = 1;
	int i=0,j=0;
	for(int i=1;i<n;++i){
		for(int j=0;j<n;++j){
			if(j==0){
				bell[i][j] = bell[i-1][i-1];
			}
			else{
				bell[i][j] = bell[i-1][j-1] + bell[i][j-1];
			}
		}
	}
	cout<<bell[n-1][0];
	return 0;
}