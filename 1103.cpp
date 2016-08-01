#include <iostream>
#include <vector>
#include <cmath>
using namespace std;


bool isPrime(int n){
	
	
	if(n < 2)
	return false;
	
	for(int i = 2; i <= n/2;i++){
	if(n%i == 0)
	return false;	
	}
	
	
	return true;
}


int main(){
	
int t;
cin >> t;

while(t--){

	int n;
	cin >> n;
	int res = 0;
	vector<int> primes;
	for(int i = 3; i < n; i++){
		if(isPrime(i))
		primes.push_back(i);
	}
	
	for(int i = 0; i < primes.size();i++){
		for(int j = i; j < primes.size();j++){
			
			if(primes[i] * primes[j] <= n){
				res++;
			}
			
		}
	}
	
	cout << res <<endl;

}

return 0;
}