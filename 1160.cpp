#include <iostream>
#include <cmath>
using namespace std;

int main(){
	
	int t;
	scanf("%d",&t);
	
	while(t--){
		
		int n;
		
		scanf("%d",&n);
		
		int stars = n;
		int spaces = 1;
		

		for(int i = 0; i <= n; i++){
			
			for(int j = 0; j < stars; j++){
				printf("#");
			}
			
			for(int j = 0; j < spaces; j++){
				if(i == 0){
					printf("#");
				}
				else if(j == 0){
					printf("/");
				}
				else if (j == spaces -1){
					printf("\\");
				}
				else{
					printf(" ");
				}
				
			}
			
			for(int j = 0; j < stars; j++){
				printf("#");
			}
			
			printf("\n");
			stars--;
			spaces += 2;
			
		}
		
		stars++;
		spaces-=2;
		for(int i = 0; i < n; i++){
			
			stars++;
			spaces -=2;
			
			for(int j = 0; j < stars; j++){
				printf("#");
			}
			
			for(int j = 0; j < spaces; j++){
				if(i == n-1){
					printf("#");
				}
				else if(j == 0){
					printf("\\");
				}
				else if (j == spaces -1){
					printf("/");
				}
				else{
					printf(" ");
				}
				
			}
			
			for(int j = 0; j < stars; j++){
				printf("#");
			}
			
			printf("\n");

			
		}
		
		
	}
}