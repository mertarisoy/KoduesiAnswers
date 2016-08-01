#include <iostream>
using namespace std;

int pow(int b,int p){
	
	int product = 1;
	for(int i = 0; i < p;i++){
		product *= b;
	}
	return product;
}

int reverse(int n){
	
	
	int d1 = n/100;
	int d2 = (n/10)%10;
	int d3 = n%10;
	
	if(d1+pow(d2,2)+pow(d3,3) == n)
	return d3*100+d2*10+d1;
	return 0;
}

int main(){
	
	int t;
	cin >> t;
	
	while(t--){
		
		int beg,end,sum = 0;
		cin >> beg >> end;
		
		for(int i=beg; i<= end;i++){
				sum+= reverse(i);
		}
		cout << sum << endl;
		
	}
	
	return 0;
}