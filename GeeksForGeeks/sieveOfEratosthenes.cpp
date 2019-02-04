#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int T;
		cin>>T;
		// cin.ignore(); must be there when using getline(cin, s)
		while(T--){
		    int n;
		    cin >> n;
		    vector<int> v(n + 1, 0);
		    for(int i = 2; i*i <= n; i++){
		        if(!v[i]){
		            for(int j = i*i; j <= n; j+=i){
		                if(!v[j]){
		                    v[j] = 1;
		                }
		            }
		        }
		    }
		    
		    for(int i = 2; i <= n; i++){
		        if(!v[i]){
		            cout << i << ' ';
		        }
		    }cout << '\n';
		}
	
	return 0;
}