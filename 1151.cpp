#include<iostream>
#include<map>
#include<string>
#include<algorithm>
using namespace std;

int main(){
	
	int t;
	scanf("%d", &t);
		
	while(t--){
		
		string word;
		cin >> word;
		
		
		map<char,int> m;
		
		for(int i = 0;i < word.length(); i++){
			m[tolower(word[i])]++;
		}
		
		int sum = 0;
		for(int i = 'a'; i<= 'z'; i++){
			sum += i;
		}
		
		int total = 0;
		for(int i = 'a'; i<= 'z'; i++){
			if(m[i] == 0)
			total += i - 'a' +1;
		}
		
		if(total == 0){
			printf("yes\n");
		}
		else{
			printf("%d\n",total);
		}
		
		
	}
}