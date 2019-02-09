using namespace std;

int main() {
	int T;
		cin>>T;
		// cin.ignore(); must be there when using getline(cin, s)
		while(T--){
		    int n;
		    cin >> n;
		    
		    int count = 0, i = 1;
		    while(true){
		        if(pow(5, i) > n)
		        break;
		        count += n / pow(5, i);
		        i++;
		    }
		    cout << count << '\n';
		}
	return 0;
}