#include <iostream>
#include <cmath>
using namespace std;

int main(){
	
	int t;
	cin >> t;
	
	while(t--){
		int x1,x2,y1,z2,y2,x,y;
		
		cin >> x1 >> y1 >> x2 >> y2 >> x >> y;
		
		int maxX = max(x1,x2);
		int maxY = max(y1,y2);
		int minX = min(x1,x2);
		int minY = min(y1,y2);
		
		if(x < min(x1,x2) || x > max(x1,x2) || y < min(y1,y2) || y > max(y1,y2)){
			cout << "out" << endl;
		}
		else{
			
			int a = min(maxX - x, x- minX);
			int b = min(maxY - y, y - minY);
			
			int res = min(a,b);
			cout << res << endl;
		}
	}
	
	return 0;
}