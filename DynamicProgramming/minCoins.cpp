#include <bits/stdc++.h>
using namespace std;

int main() {
	vector<int> v{1, 3, 5};
	int sum = 11;
	vector<int> s(sum + 1, INT_MAX);
	
	s[0] = 0;
	
	
	for(int i = 1 ; i <= sum ; i++){
	    for(int j = 0; j < 3; j++){
	        if((v[j] <= i) && ((s[i - v[j]] + 1) < s[i])){
	            s[i] = s[i - v[j]] + 1;
	        }
	    }
	}
	

	
	cout << s[sum];
	return 0;
}
