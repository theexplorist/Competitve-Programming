#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
		cin>>T;
		// cin.ignore(); must be there when using getline(cin, s)
		while(T--){
		    int n;
		    cin >> n;
		    vector<int> v(n);
		    for(int i = 0; i < n; i++){
		        cin >> v[i];
		    }
		    
		    int a = __gcd(v[0], v[1]);
		    for(int i = 2; i < n; i++){
		        a = __gcd(a, v[i]);
		    }
		    cout << a << '\n';
		}
	
	return 0;
}