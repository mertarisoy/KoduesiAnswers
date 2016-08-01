#include <iostream>
using namespace std;


int main(){
	
	int t;
	cin >> t;
	
	while(t--){
		
		char c;
		cin >> c;
	
		for(int i = 97; i <= c; i++){
			for(int j = 97; j < i;j++){
				cout << " ";
			}
			cout << (char)i<< endl;
		}
	
	}
	
	return 0;
}