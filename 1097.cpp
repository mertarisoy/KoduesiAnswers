#include <iostream>
#include <string>
using namespace std;

int reverse(int n){

int rvs = 0;
while(n){
rvs = rvs*10 + (n%10);
n /=10;
}
return rvs;
}

int main(){

int t;
cin >> t;
while(t--){

string input;
cin >> input;

int number =0;
int sum = 0;

for(int i=0;i<input.length()-1; i++){
char c = input[i];
number = number*10 + (c -'0');
sum += reverse(number);
}
cout << sum << endl;
}

return 0;
}