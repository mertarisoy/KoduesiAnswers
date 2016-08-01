#include <iostream>
using namespace std;

int GCD(int s1,int s2){
    
    int a;
    while(s1)
    {
         a = s1;
         s1 = s2 % s1;
         s2 = a;
    }
    return s2;
}   
    

int main(){
   
    int test,n,number,maxGCD=0,gcd,n1,n2;
    cin >> test;
    while(test--){
         cin >> n;
         int numbers[n];
         for(int i = 0; i < n; i++){
                 cin >> number;
                 numbers[i] = number;
                 }
         for(int i = 0; i < n - 1; i++){
                 for (int j = i + 1; j < n; j++){
                          gcd = GCD(numbers[i],numbers[j]);
                          if(gcd > maxGCD){
                                maxGCD = gcd;
                                n1 = numbers[i];
                                n2 = numbers[j];
                                }
                 }
         }
         if(n1 < n2)
         cout << n1 << " " << n2 << " " << maxGCD << endl;
         else
         cout << n2 << " " << n1 << " " << maxGCD << endl;
         
         n1 = 0;
         n2 = 0;
         maxGCD = 0;
              
    }                           
    return 0;
}
