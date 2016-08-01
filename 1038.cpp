#include <iostream>
using namespace std;

int main(){
	
	int t;
	cin >> t;
	
	while(t--){
	
	int n;
	cin >> n;
	int spaces = 0;
	for(int i =n*2-1; i > 0;i -= 2){
		for(int j = 0; j < spaces;j++)
		cout << " ";
		
		for(int j = 0; j < i;j++)
		cout << "*";
		
		spaces++;
		cout << endl;
	}
	
	}
	
	return 0;
}