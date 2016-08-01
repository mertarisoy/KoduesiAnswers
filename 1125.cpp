#include <iostream>
#include <cmath>
using namespace std;

int main(){
	
	int t;
	cin >> t;
	
	while(t--){
		
		int n;
		cin >> n;
		
		double sum = pow(n%10,2);
		n /= 10;
		sum *= pow(n%10,2);
		n /= 10;
				
		while(n){
			
			double d = n%10;
			sum += pow(d,2);
			n/= 10;
		}
		
		cout << sum << endl;
		
		
	}
}