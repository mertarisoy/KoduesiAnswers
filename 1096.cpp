#include <iostream>
#include <cmath>
using namespace std;

int sod(int n){

int sum = 1;
for(int i =2; i<= sqrt(n);i++){
if(n % i == 0){
sum+= i;
sum+= n/i;
}

}
if(sqrt(n)*sqrt(n) == n)
sum -= sqrt(n);

return sum; 
}
int main(){
	
int t;
cin >> t;

while(t--){

int beg,end;
cin >> beg >> end;
int max =0,maxNumber = beg;
for(int i = beg; i<=end;i++){
int sumDiv = sod(i);
if(sumDiv > max){
max = sumDiv;
maxNumber = i;
}
}

cout << maxNumber << endl;
}

return 0;
}