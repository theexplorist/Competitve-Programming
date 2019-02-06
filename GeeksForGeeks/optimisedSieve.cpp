// Optimised sieve by checking for only odd numbers
#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<long> v(n + 1);
	v[2] = 0;
	for(long i = 3; i <= n; i++){
	    if(i&1){
	        v[i] = 0;
	    }else{
	        v[i] = 1;
	    }
	}
	
	for(long i = 3; i*i <= n; i = i + 2){
	    if(!v[i]){
	        for(long j = i * i; j < n; j = j + 2){
	            if(!(j % i)){
	                v[j] = 1;
	            }
	        }
	    }
	}
	
	for(long i = 2; i <= n; i++){
	    if(!v[i]){
	        cout << i << '\n';
	    }
	}
	return 0;
}