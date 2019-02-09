using namespace std;

int main() {
	//code
	int T;
		cin>>T;
		// cin.ignore(); must be there when using getline(cin, s)
		while(T--){
		    long n;
		    cin >> n;
		    cout << 0 << ' ';
		    queue<long> q;
		    for(int i = 1; i <= 9; i++){
		        q.push(i);
		    }
		    
		    while(q.size() > 0){
		      long temp = q.front();
		      q.pop();
		      if(temp > n){
		          break;
		      }
		      cout << temp << ' ';
		      int rem = temp % 10;
		     if(rem > 0) q.push(temp * 10 + rem - 1);
		     if(rem < 9) q.push(temp * 10 + rem + 1);
		    }
		    
		    cout << '\n';
		}
	return 0;
}