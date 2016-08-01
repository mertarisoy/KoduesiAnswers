#include <iostream>
using namespace std;

int main(){
	
	
	int t = 0;
	scanf("%d",&t);
	while(t--){
		
		int n,a,b,c;
		
		scanf("%d%d%d%d",&n,&a,&b,&c);
		
		int r1 = 0;
		int r2 = 0;
		
		for(int i = 0; i <= n/a;i++){
			for(int j = 0; j<= n/b;j++){
				for(int k = 0; k <= n/c;k++){
					if(a*i + b*j + c*k == n){
						r1++;
						if((i == 0 && j != 0 && k != 0) || (i != 0 && j == 0 && k != 0) || (i != 0 && j != 0 && k == 0) || (i != 0 && j != 0 && k != 0)){
							r2++;
						}
					}
				}
			}
		}
		if(r1 == 0){
			printf("Impossible\n");
		}
		else{
			printf("%d %d\n",r1,r2);
		}
	}

}