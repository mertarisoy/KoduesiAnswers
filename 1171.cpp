#include <iostream>
#include <string>
using namespace std;

int main(){
	
	int t;
	cin >> t;
	
	while(t--){
		
		int n;
		cin >> n;
		
		if(n == 1){
			cout << "*";
			continue;
		}
		string stars = "";
		string starSpaces = "";
		string spaces = "";
		for(int i = 0;i< n;i++){
			if(i == 0 || i == n-1){
				starSpaces += '*';
			}else{
				starSpaces += ' ';
			}
			stars += '*';
			spaces += ' ';
		}
		
		spaces = spaces.substr(1);
		for(int i = 0; i< n;i++){
			cout << spaces.substr(i) << stars << endl;
		}
		
		for(int i = 0; i< n-2;i++){
			cout << spaces.substr(n-1-i) << starSpaces << endl; 
			
		}
		
		cout << spaces  << stars << endl;
		
		
	}
	
	return 0;
}