#include <iostream>
using namespace std;

int main(){
	
	
	int t;
	scanf("%d",&t);
	
	while(t--){
		
		int n;
		cin >> n;
		
		bool *visit = new bool[10];
		for(int i = 0; i < 10;i++){
			visit[i] = false;
		}
		
		bool res = true;
		
		while(n){
			
			int d =  n%10;
			if(visit[d] == false){
				visit[d] = true;
			}
			else{
				res = false;
				break;
			}
			n /= 10;
		}
		
		string s = res ? "yes" : "no";
		cout << s << endl;
		
	}
	return 0;
}