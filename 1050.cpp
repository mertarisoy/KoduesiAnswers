#include <iostream>
using namespace std;

int sumDigit(int n){
    int sum = 0;
    
    while(n){
      sum += n % 10;
      n /= 10;
      }
      return sum;
}

int main(){
    
    int test,h,m,s,n,cnt = 0;
    cin >> test;
    while(test--){
                  
         cin >> n;
         for(int i = 0; i < 24; i++){
                 for(int j = 0; j < 60; j++){
                         for(int k = 0; k < 60; k++){
                                 if (sumDigit(i) + sumDigit(j) + sumDigit(k) == n)
                                 cnt++;
                         }
                 }
         }
         
         cout << cnt << endl;
         cnt = 0;
        
    }                        
    return 0;
}
