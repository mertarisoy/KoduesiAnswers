#include<iostream>
#include<string>
using namespace std;

int main(){
	
	int t;
	scanf("%d", &t);
		
	while(t--){
		
		int n;
		scanf("%d", &n);
		
		int sum = 0;
		while(n){
			sum += n %10;
			n /= 10;
		}
		
		printf("%s\n", sum % 2 == 0 ? "even" : "odd");
		
	}
}