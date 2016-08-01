#include <iostream>
using namespace std;

int main(){
	
	int t;
	scanf("%d",&t);
	
	while(t--){
		
		
		int m,n;
		scanf("%d%d",&m,&n);
		
		int matrix[m][n];
		int back[m][n];
		for(int i = 0; i < m;i++){
			for(int j = 0; j < n; j++){
				scanf("%d",matrix[i] + j);

				back[i][j] = matrix[i][j];
			}
		}
		
				int max = 0;

		for(int i = 0; i < m;i++){
			for(int j = 0; j < n; j++){
				
				int sum = 0;
				if(i > 0 && j > 0){
					sum += back[i-1][j-1];
				}
				if(i > 0 && j < n-1){
					sum += back[i-1][j+1];
				}
				if(i < m-1 && j > 0){
					sum += back[i+1][j-1];
				}
				if(i < m-1 && j < n-1){
					sum += back[i+1][j+1];
				}
				
				matrix[i][j] = sum;
				if (sum > max)
				max = sum;
				
			}
		}
		
		
		for(int i = 0; i < m;i++){
			matrix[i][n-1] = max;
		}
		
		for(int i = 0; i < m;i++){
			for(int j = 0; j < n; j++){
				
				printf("%d ",matrix[i][j]);
			}
			
			printf("\n");
		}
	}
}