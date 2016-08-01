#include <iostream>
using namespace std;

int main(){

int t;
cin >> t;

while(t--){

int a,b,c,d;
cin >> a >> b;

int m1[a][b];


for(int i = 0; i < a; i++){
	for(int j = 0; j < b; j++)
	cin >> m1[i][j];
}

cin >> c >> d;
int m2[c][d];


for(int i = 0; i < c; i++){
	for(int j = 0; j < d; j++)
	cin >> m2[i][j];
}

if(b != c){
	cout << "No product" << endl;
	continue;
}

int res[a][d];

for(int i = 0; i < a; i++){
	for(int j = 0; j < d; j++)
	res[i][j] = 0;
}


for (int i=0 ; i < a ; i++){ 
	   for (int j=0 ; j< d ; j++){ 
			for (int k=0 ; k < b ; k++){
			   res[i][j] += m1[i][k] * m2[k][j];
			} 
		} 
	}

for(int i = 0; i < d; i++){
	for(int j = 0; j < a; j++)
	cout <<  res[j][i] << " ";
cout << endl;
}


}

return 0;
}