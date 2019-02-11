// check for only upto root n prime numbers to reduce the complexity.
#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
		cin>>T;
		// cin.ignore(); must be there when using getline(cin, s)
		while(T--){
		    long n;
		    cin >> n;
		    long c = 1, c1 = 0;
		    for(long i = 4; i <= n; i++){
		        c = 1;
		        for(long j = 2; j <= i; j++){
		            if(i % j == 0)
		            c++;
		            if(c > 3){
		            c = 0;
		            break;
		            }
		        }if(c == 3){
		            c1++;
		        }
		    }cout << c1 << '\n';
		}
	return 0;
}