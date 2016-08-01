#include <iostream>
using namespace std;

int main(){
	
	int t;
	scanf("%d",&t);
	
	while(t--){
		
		
		int n;
		scanf("%d",&n);
		
		int star = 1;

		for(int i = 0; i < n-1;i++){
			for(int j = 0; j < star ; j++){
				if(j == 0 || j == star-1)
				cout << "*";
				else
				cout << " ";
			}
			cout << endl;
			star++;
		}
		
		for(int i = 0 ;i < n ; i++){
			
			for(int j = 0; j < n; j++){
				if( j == 0 || j == n-1 || i == 0 || i == n-1){
					cout << "*";
				}	
				else{
					cout << " ";
				}	
			}
			cout << endl;
			
		}
	}
}