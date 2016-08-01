#include<iostream>
using namespace std;

int main (){
	
	int t;
	scanf("%d",&t);
	
	while(t--){
		
		int n,c;
		scanf("%d%d",&n,&c);
		
		int coins[c];
		for(int i = 0; i < c; i++){
			scanf("%d", &coins[i]);
		}
		
		int temp[c];		
		int res[c];
		int resG[c];
		int coinsCount[c];
		
		for(int i = 0; i < c; i++){
			res[i] = 0;
			resG[i] = 0;
			coinsCount[i] = 0;
		}
		
		temp[0] = n / coins[0];
		res[0] = temp[0];
	
		for(int i = 1; i < c; i++){
			
			temp[i] = temp[i-1];
			int number = n;
			int totalCoins  = 0;
			
			for(int j = i; j >= 0;j--){
				int currentCoins = number / coins[j];
				coinsCount[j] = currentCoins;
				totalCoins += currentCoins;
				number %= coins[j];
			}
			if(totalCoins < temp[i-1]){
				temp[i] = totalCoins;
				for(int j = 0; j < c; j++){
					res[j] = coinsCount[j];
				}
			}
		}
		
		for(int i = c-1; i >= 0; i--){
			resG[i] = n/coins[i];
			n %= coins[i];
		}
		
		for(int i = 0; i < c; i++){
                if(resG[i] != 0 || res[i] != 0)
		        	cout << coins[i] << " " << resG[i] << " " << res[i] << endl;
		}
		
	}
}