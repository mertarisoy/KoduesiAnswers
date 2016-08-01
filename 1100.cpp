#include <iostream>
using namespace std;

int main(){

int t;
cin >> t;

while(t--){
	
	int n;
	char c;
	cin >> n >> c;
	int spaces = n -1;
	int stars = 1;
	
	if(n == 0)
	continue;
	for(int k = 0; k < n;k++){
	
	for(int i = 0; i < spaces; i++){
		cout << " ";
	}
	cout << "*";
	for(int i = 1; i < stars; i++){
		cout << c << "*";
	}
	
	spaces--;
	stars ++;
	
	cout << endl;
	}
}

return 0;
}