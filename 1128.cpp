#include <iostream>
#include <cmath>
using namespace std;

int main (){
	
	int t;
	scanf("%d", &t);
	
	while(t--){
		
		int m,n;
		scanf("%d%d",&m,&n);
		

		int res = 0;
		for(int i = m; true; i++){
			

			if(i >= n){
				break;
			}
			
			for(int j = i+1;true; j++){
				
				int c2 = pow(i,2) + pow(j,2);
				int c = sqrt(c2);
				if(c > n){
					break;
				}
				
				if(c2 == c*c){
					res++;					
				}
			}
			
		}
		
		printf("%d\n",res);
	}
	return 0;
}