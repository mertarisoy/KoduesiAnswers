#include <iostream>
#include <algorithm>
#include <array>
using namespace std;

int findMin(int arr[]){
	
}
int main(){
	
	
	int t;
	scanf("%d",&t);
	
	while(t--){
		
		int n;
		scanf("%d",&n);
		
		int mx[n][n];
		
		for(int i = 0; i< n;i++){
			for(int j = 0; j < n;j++){
				scanf("%d",&mx[i][j]);
			}
		} 
		
		int sumDiag = 0;
		for(int i = 0; i< n;i++){
			for(int j = 0; j < n;j++){
				if(i % 2 == 0){
					if(j % 2 == 0){
						sumDiag += mx[i][j];
					}
				}
				else{
					if(j % 2 == 1){
						sumDiag += mx[i][j];
					}
				}
			}
		} 
		
		for(int i = n-1; i >= 0;i--){
			mx[n-i-1][i] = sumDiag;
		}
			
		int MIN = mx[1][0];
		for(int i = 1; i< n;i++){
			
			int min = mx[i][0];
			for(int j = 0; j < i;j++){
				if(mx[i][j] < min){
					min = mx[i][j];
				}
			}
			if(min < MIN){
				MIN = min;
			}
		} 
		
		for(int i = 0 ; i < n;i++){
			mx[i][i] = MIN;
		}
		
		for(int i = 0; i< n;i++){
			for(int j = 0; j < n;j++){
				printf("%d ",mx[i][j]);
			}
			printf("\n");
		}
		

	}
	return 0;
}