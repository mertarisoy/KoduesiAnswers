#include <iostream>
#include <cmath>
using namespace std;

int reverse(int n){
	    
	    int reverse = 0;
	    while(n){
	    	reverse = reverse*10 + n%10;
	    	n = n/10;
	    }
	    return reverse;
}

bool isPrime(int n){
	    
	   if(n < 2)
		   return false;
	   if(n % 2 == 0)
		   return false;
	   for(int i =3; i <= sqrt(n);i +=2){
		   if(n % i == 0)
			   return false;
		   
	   }
	   return true;
}   
int main(){
    
    int test,m,n;
    cin >> test;
    
    while(test--){
               
          cin >> m >> n;  
          int sum = 1;
          int i = 2;
          int cnt = 0;
          while(sum <= n){
                   
              if(sum >= m && sum <= n && isPrime(reverse(sum)))
              cnt++;
              
              sum +=i;
              i++; 
          }
          
          cout << cnt << endl;
                  
    }
    return 0;
}