#include <iostream>
#include <cmath>
using namespace std;

int main (){
	
	int t;
	scanf("%d", &t);
	
	while(t--){
		
		int h,l,hl,ll,hr,lr,d;
		int res;
		scanf("%d%d%d%d%d%d%d",&h,&l,&hl,&ll,&hr,&lr,&d);
		
		if(d >= h)
		res = 1;
		else if((d >= hl && hl + d >= h) || (hr <= d && hr + d >= h))
		res = 2;
		else if(ll+lr >= l && d >= hl && d >= hr-hl && d >= h-hr)
		res = 3;
		else if(d >= hl && d >= sqrt(pow(l-(lr+ll),2) + pow(hr-hl,2)) && d >= h-hr)
		res = 3;
		else
		res = 0;
		
		printf("%d\n",res);
	}
	return 0;
}