#include <iostream>
#include <string>
#include <set>
#include <map>
#include <algorithm>
using namespace std;

int main(){
	
	int t;
	scanf("%d",&t);
	
	while(t--){
		
		string s1,s2;
		cin >> s1 >> s2;
		transform(s1.begin(),s1.end(),s1.begin(),::tolower);
		transform(s2.begin(),s2.end(),s2.begin(),::tolower);
		
		map<char,int> m1,m2;
		
		if(s1.length() != s2.length()){
			printf("no\n");
			continue;
		}
		
		for(int i = 0; i < s1.length(); i++){
			m1[s1[i]]++;
			m2[s2[i]]++;
		}
		
		bool isAnagram = true;
		for(int i = 0; i < s1.length(); i++){
			if(m1[s1[i]] != m2[s1[i]]){
				isAnagram = false;
				break;
			}
		}
		if(!isAnagram){
			printf("no\n");
			continue;
		}
		
		int sum = 0;
		set<char> s;
		for(int i = 0; i < s1.length(); i++){
			if(s.insert(s1[i]).second){
				sum+= s1[i] - 'a' + 1;
			}
			
		}
		
		printf("%d\n",sum);
		
	}
}