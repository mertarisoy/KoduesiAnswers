#include <iostream>
using namespace std;

int main(){
	
	int t;
	scanf("%d",&t);
	
	while (t--){
		
		int n, min;
		scanf("%d%d",&n,&min);
		
		int cnt = 0;
		int arr[n];
		
		for(int i = 0;i < n; i++){
			int number;
			scanf("%d", &number);
			arr[i] = number;
		}
		
		for(int i = 0;i < n; i++){
			if(arr[i] > 0 && arr[i] >= arr[min-1])
			cnt++;
			else break;
		}
		
		printf("%d\n",cnt);
	}
}