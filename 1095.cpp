#include <iostream>
using namespace std;

int main(){
	
int t;
cin >> t;

while(t--){

int n;
int stars;
int spaces;

cin >> n;

spaces = n -1;
stars = 1;
for(int i = 0; i< n;i++){
for(int j = 0 ; j< spaces;j++){
cout << " ";		
}
for(int j = 0 ; j< stars;j++){
cout << "*";		
}
spaces--;
stars +=2;
cout << endl;
}

stars -= 2;
spaces++;
for(int i = 0; i< n-1;i++){

spaces++;
stars -=2;

for(int j = 0 ; j< spaces;j++){
cout << " ";		
}
for(int j = 0 ; j< stars;j++){
cout << "*";		
}

cout << endl;
}
}

return 0;
}