//multiprecision long factorials handling
#include <boost/multiprecision/cpp_int.hpp>
#include <iostream>
namespace mp = boost::multiprecision;
using namespace std;

mp :: cpp_int factorial(int n){
    mp :: cpp_int u = 1;
     for(int i = 2; i <= n; i++){
          u *= i;
      }
    return u;
}
int main(){
    
    int T;
		cin>>T;
		// cin.ignore(); must be there when using getline(cin, s)
		while(T--){
		    int n, r;
		    cin >> n >> r;
		    mp :: cpp_int a = factorial(n);
		    mp :: cpp_int b = factorial(n - r);
		    mp :: cpp_int c = factorial(r);
		    cout << (a / (b * c)) % 1000000007 << '\n';
		    
		}
     
    return 0;
}