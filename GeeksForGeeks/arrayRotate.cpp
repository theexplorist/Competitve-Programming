#include<bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin >> t;
	while(t--){
	    long n,d;
	    cin >> n >> d;
	    queue<long> q;
	    for(long i = 0; i < n; i++){
	        int e;
	        cin >> e;
	        q.push(e);
	    }
	    
	    for(long i = 0; i < d; i++){
	        int el = q.front();
	        q.pop();
	        q.push(el);
	    }
	    
	    while(!q.empty()){
	        cout << q.front() << " ";
	        q.pop();
	    }cout << "\n";
	    
	}
	return 0;
}
