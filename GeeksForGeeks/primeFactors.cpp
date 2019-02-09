#include <bits/stdc++.h>
using namespace std;

long primeFactors(int n){
    vector<long> v;
    while(n % 2 == 0){
        v.push_back(2);
        n = n / 2;
    }
    
    for(long i = 3; i*i <= n; i = i + 2){
        while(n % i == 0){
            v.push_back(i);
            n = n/i;
        }
    }
    
   if(n > 2){
       v.push_back(n);
   }return v[v.size() - 1]; 
}
int main() {
	int T;
		cin>>T;
		// cin.ignore(); must be there when using getline(cin, s)
		while(T--){
		    long n;
		    cin >> n;
		    cout << primeFactors(n) << '\n';
		    
		}
	return 0;
}