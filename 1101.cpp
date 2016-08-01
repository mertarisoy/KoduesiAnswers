#include <iostream>
using namespace std;


int main(){

int t;
cin >> t;

while(t--){
	
	float a1,b1,c1,a2,b2,c2;
	cin >> a1 >>b1 >>c1 >>a2 >>b2 >> c2;
	
if(a1/a2 == b1/b2){
	if(c1/c2 == a1/a2)
	cout << "Infinite solutions";
	else
	cout << "No Solutions";
	
	cout << endl;
	continue;
}

float k = a1/a2;
a2 *= k;
b2 *= k;
c2 *= k;

int y = (c1-c2)/(b1-b2);
int x = (c1-(b1*y))/a1;

cout << x << " " << y << endl;	

}

return 0;
}