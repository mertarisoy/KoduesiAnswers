#include<iostream>
#include<vector>
#include<set>

using namespace std;

int main(){
	
	int t;
	scanf("%d", &t);
	
	while(t--){
		
		int n;
		scanf("%d", &n);
		
		int count = 0;
		while(n--){
			int number;
			scanf("%d", &number);
			
			vector<int> m;
			set<int> s;
			while(number){
				
				int d = number % 10;
				m.push_back(d);
				s.insert(d);
				
				number /= 10;
			}
			
			if(m.size() == 3 && s.size() >= 2)
			count++;
		}
		
		printf("%d\n",count);
	}
}