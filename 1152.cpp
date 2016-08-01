#include <iostream>
#include <cmath>
using namespace std;

int main(){
	
	
	int t;
	scanf("%d",&t);
	
	while(t--){
		
		int a,b,m,x1,x2,y1,y2;
		
		scanf("%d%d%d%d%d%d%d",&a,&b,&m,&x1,&y1,&x2,&y2);
			
		int cnt = 0;
		
		if(m >= b-a)
		cnt = 1;
		else if(m >= x1-a && m >= b-x1)
		cnt = 2;
		else if (m >= x2-a && m >= b-x2)
		cnt = 2;
		else if(m >=  x1-a && m >= sqrt(pow(x2-x1,2) + pow(y2-y1,2)) && m >= b-x2)
		cnt = 3;

		printf("%d\n",cnt);
		
	}
}