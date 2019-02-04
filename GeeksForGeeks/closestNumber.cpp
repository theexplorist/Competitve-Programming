#include <iostream>
using namespace std;
/* The code works in O(1). 
The logic is to check for the negative numbers
for the 2nd number closest to n
The cases can be:-
*n > 0 and m > 0
*n < 0 and m > 0
*n < 0 and m < 0
*/
int closestNumber(int n, int m){
     int q = n / m;
     int n1 = q * m;
     int n2 = (n * m) > 0 ? (q + 1) * m : (q - 1) * m;
     if (abs(n - n1) < abs(n - n2)) 
		return n1; 
	
	return n2;	 
}
int main() {
	//code
	int t, n, m;
	cin >> t;
	while(t--){
	    cin >> n >> m;
	   cout << closestNumber(n, m) << "\n";
	}
	return 0;
}