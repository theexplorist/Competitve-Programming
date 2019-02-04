#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    double a, b, k;
	    cin >> a >> b >> k;
	    long long p = pow(a, b);
	    int rem;
	    while(k > 0 && p > 0){
	        rem = p % 10;
	        p = p / 10;
	        k--;
	    }cout << rem << "\n";
	}
	return 0;
}