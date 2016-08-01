#include <iostream>
#include <cmath>
using namespace std;

int main(){
	
	int t;
	scanf("%d",&t);
	
	while(t--){
		
		long long m;
		scanf("%lld",&m);
		
		int cnt = 0;
		unsigned long long sum = 0;
		
		int number = 1;
		while(true){
			
			sum += number;
			if(sum <= m){
				double sq = sqrt(sum);
				if(sq == floor(sq)){
					cnt++;
				}
			}
			else{
				break;
			}
			number++;
		}
		
		printf("%d\n",cnt);
	}
}