#include <iostream>
using namespace std;


int inv(int n){
	
	int res = 0;
	while(n){
		res = res*10 + n%10;
		n /= 10;
	}
	
	return res;
	
}
int main(){

int t;
cin >> t;

while(t--){

	int oneBeg,oneEnd,threeBeg,threeEnd;
	cin >>oneBeg >> oneEnd >> threeBeg >> threeEnd;
	int n = 0;
	
	for(int i = oneBeg; i<= oneEnd;i++){
		for(int j = threeBeg; j<= threeEnd; j++){
			
			if(i+j == inv(i*j)){
				cout << i << " " << j << endl;
				n++;
			}
		}
	}
	if (n == 0)
	cout << n << endl;
}

return 0;
}