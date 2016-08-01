#include <iostream>
using namespace std;


int main(){
	
	int t;
	cin >> t;
	
	while(t--){
		
		char c;
		cin >> c;
	
		for(int i = 65; i <= c; i++){
			for(int j = 64; j < i;j++){
				cout << (char)i << " ";
			}
			cout << endl;
		}
	
	}
	
	return 0;
}