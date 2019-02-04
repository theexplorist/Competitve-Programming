#include <bits/stdc++.h>
using namespace std;

int main() {
	float t, a, b;
	cin >> t;
	while(t--){
	    cin >> a >> b;
	    int x ;
	    cin >> x;
	    if(x == 1){
	        cout << a;
	    }else if(x == 2){
	        cout << b;
	    }else{
	        float r = b/a;
	        for(int i = 0; i < (x - 2); i++){
	            b = b * r;
	        }cout << floor(b);
	    }cout << '\n';
	    
	}
	return 0;
}