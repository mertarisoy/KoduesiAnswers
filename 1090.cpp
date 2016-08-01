#include <iostream>
using namespace std;


int main(){
	
	int t;
	cin >> t;
	
	while(t--){
		
		int stars;
		cin >> stars;
		
		for(int i = 1; i <= stars;i++){
			for(int j = 0; j<i; j++){
				cout << stars- j << " ";
			}
			
			cout << endl;
		}
	}
	
	return 0;
}