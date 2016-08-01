#include <iostream>
#include <cmath>
using namespace std;

int main(){
	
	int t;
	scanf("%d",&t);
	
	while (t--){
		
		long long int a,b,c;
		scanf("%lld%lld%lld",&a,&b,&c);
		printf("%lld\n",min(min(a/2,b),c/4));
	}
}