#include <iostream>
using namespace std;

int main(){
	
	int t;
	cin >> t;
	while(t--){
		
		int times[2][3];
		int t1,t2;
		for(int i = 0; i <3;i++){
			cin >>t1 >> t2;
			times[0][i] = t1*60+t2;
			cin >>t1 >> t2;
			times[1][i] = t1*60+t2;
		}
		
		int *day = new int[60*24];
		for(int i = 0; i < 60*24;i++){
			day[i] = 0;
		}
		for(int i = 0; i < 3;i++){
			for(int j = times[0][i] ;j < times[1][i];j++)
			day[j]++;
		}
		
		int one = 0;
		int two = 0;
		int three = 0;
		
		int temp;
		for(int i = 0; i < 60*24;i++){
			temp = day[i];
			if(temp == 1)
			one++;
			else if(temp == 2)
			two++;
			else if(temp == 3)
			three++;
		}
		
		cout << one/60 << " " << one%60 << endl;
		cout << two/60 << " " << two%60 << endl;
		cout << three/60 << " " << three%60 << endl;
	}
}