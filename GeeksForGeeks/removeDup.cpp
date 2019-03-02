#include <bits/stdc++.h>
using namespace std;

int main() {

	//code
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    vector<int> v(101, 0);
	    for(int i = 0;  i < n; i++){
	        int e;
	        cin >> e;
	        v[e]++;
	        if(v[e] == 1){
	            cout << e << " ";
	        }
	    }
	    
	  cout << '\n';
	}
	return 0;
}
