#include <iostream>
using namespace std;

int main(){
	
	int t;
	cin >> t;
	
	while(t--){
		
		int n;
		cin >> n;
		
		int sum = 0;
		int p = 1;
		while(n){
			int d = n %10;
			sum+= d;
			p *= d;
			n /= 10;
		}
		cout << p - sum << endl;
		
	}
	return 0;
	
}