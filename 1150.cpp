#include<iostream>
#include<string>

using namespace std;

int main(){
	
	int t;
	scanf("%d", &t);
		
	while(t--){
		
		int n;
		scanf("%d", &n);
		
		int stars = 1;
		int spaces = n-1;
		
		for(int i = 0; i < n-1; i++){
			
			for(int j = 0;j < spaces;j++){
				printf(" ");
			}
			
			for(int j = 0;j < stars;j++){
				if(j == 0 || j == stars -1){
					printf("*");
				}
				else{
					printf(" ");
				}
			}
			
			for(int j = 0;j < spaces;j++){
				printf(" ");
			}
			
			printf("\n");
			
			stars += 2;
			spaces--;
		}
		
		for(int i = 0; i < 2*n-1; i++){
			printf("*");
		}
		
		printf("\n");
	
		for(int i = 0; i < n-1; i++){
			
			stars -= 2;
			spaces++
			;
			for(int j = 0;j < spaces;j++){
				printf(" ");
			}
			
			for(int j = 0;j < stars;j++){
				if(j == 0 || j == stars -1){
					printf("*");
				}
				else{
					printf(" ");
				}
			}
			
			for(int j = 0;j < spaces;j++){
				printf(" ");
			}
			
			printf("\n");
		}
	}
}