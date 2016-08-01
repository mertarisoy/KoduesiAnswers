#include <iostream>
using namespace std;

int main(){
	
	
	int t;
	scanf("%d",&t);
	
	while(t--){
		
		string s;
		cin >> s;
		
		int *lowC = new int[26];
		int *upperC = new int[26];
		int *lowV = new int[26];
		int *upperV = new int[26];
		int *digit = new int[10];
		
		int d = 0, lc = 0,uc = 0, lw =0, uw = 0; 
		
		for(int i = 0; i< 26;i++){
			
			lowC[i] = 0;
			upperC[i] = 0;
			lowV[i] = 0;
			upperV[i] = 0;
		}
		
		for(int i = 0; i < 10;i++){
			digit[i] = 0;
		}
		
		
		for(int i = 0; i < s.length();i++){
			char c = s[i];
			if(c >= '0' && c <= '9'){
				d++;
				digit[c-'0']++;
			}
			else if(c >= 'a' && c <= 'z'){
				if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
					lowV[c-'a']++;
					lw++;
				}
				else{
					lc++;
					lowC[c -'a']++;
				}
			}
			else if(c >= 'A' && c <= 'Z'){
				
				if(c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'){
					upperV[c-'A']++;
					uw++;
				}
				else{
					uc++;
					upperC[c - 'A']++;
				}
			}	
		
		}
	
		if(lw != 0){
			for(int i = 0; i< 26;i++){
			if(lowV[i] != 0){
				cout << (char)(i + 'a') << " " << lowV[i] << " ";
			}
		}
		
		cout << endl;
		}
		
		if(uw != 0){
			for(int i = 0; i< 26;i++){
				if(upperV[i] != 0){
					cout << (char)(i + 'A') << " "<< upperV[i] << " ";
				}
			}
		cout << endl;	
		}
		
		if(lc != 0){
			for(int i = 0; i< 26;i++){
				if(lowC[i] != 0){
					cout << (char)(i + 'a') << " "<< lowC[i] << " ";
				}
			}
		cout << endl;
		}
		
		
		
		if(uc != 0){
			for(int i = 0; i< 26;i++){
			if(upperC[i] != 0){
				cout << (char)(i + 'A') << " "<< upperC[i] << " ";
			}
		}
		
		cout << endl;
		}
		if(d != 0){
			for(int i = 0; i< 10;i++){
			if(digit[i] != 0){
				cout << (char)(i + '0') << " "<< digit[i] << " ";
			}
		}
		
		cout << endl;
		}
		
		
		
	}
	return 0;
}