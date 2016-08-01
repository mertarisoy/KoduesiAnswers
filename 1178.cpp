#include <iostream>
using namespace std;

int main(){
	
	
	int t;
	scanf("%d",&t);
	
	while(t--){
		
		int n;
		scanf("%d", &n);
		
		int* num = new int[n];
		
		for(int i = 0; i<n;i++){
			scanf("%d",&num[i]);
		}
		
		for(int i = 0; i < n-1;i++){
			int old = num[i];
			for(int j = i+1; j < n;j++){
				if(num[j] > num[i]){
					num[i] = num[j];
					break;
				}
			}
			if(num[i] == old){
				num[i] = 0;
			}
		}
		
		num[n-1] = 0;
		
		printf("%d", num[0]);
		for(int i = 1; i < n; i++){
			printf(" %d", num[i]);
		}
		
		printf("\n");
		
	}
	return 0;
}