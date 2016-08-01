#include <iostream>
#include <cmath>
using namespace std;

int main(){
	
	int t;
	scanf("%d",&t);
	
	while(t--){
		
		int n1,n2,n3,x,y,p,z,q;
		
		scanf("%d%d%d%d%d%d%d%d",&n1,&n2,&n3,&x,&y,&p,&z,&q);
		
		int a = x / n1;
		int b = (y*p) / n2;
		int c = (z * q) / n3;
		
		int day = min(min(a,b),c);
		
		printf("%d\n",day);
		if(a == day)
		printf("%d ",1);
		if(b == day)
		printf("%d ",2);
		if(c == day)
		printf("%d ",3);
		
		printf("\n");
		
	}
}