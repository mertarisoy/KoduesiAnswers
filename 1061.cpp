#include <iostream>
#include <cmath>
using namespace std;

int main(){
    
    int test;
    long N;
    cin >> test;
    while(test--){
         
         cin >> N;
         bool *isPrime = new bool[N];
         
         //Sieve of Eratosthenes(imporved then Twin Numbers)
         for (int i = 2; i < N ;i++)
         isPrime[i] = true;
         
         for(int i = 2; i*i < N;i++){
                 if(isPrime[i])
                    for(int j = i; i*j< N; j++)
                    isPrime[i*j] = false;
         }
         //end   
         int counter = 0;
         
         //count primes         
         for(long i = 2;i < N;i++)
         if(isPrime[i])
            counter++;
         
         //prime list
         long *primes = new long[counter];
         counter = 0;
         for(long i = 2;i < N;i++)
         if(isPrime[i]){
            primes[counter++] = i;
            }
         

         int left = 0,right = counter-1;
         int result[4];
         
         if(N % 2 == 0){
         
         result[0] = 2;
         result[1] = 2;
         while (left <= right) {
               if(4 + primes[left] + primes[right] == N)
               break;
               else if(4 + primes[left] + primes[right]  < N) 
               left++;
               else
               right--;
         }
         }
         else{
              
         result[0] = 2;
         result[1] = 3;
         while (left <= right) {
               if(5 + primes[left] + primes[right] == N)
               break;
               else if(5 + primes[left] + primes[right]  < N) 
               left++;
               else
               right--;
         }

         }
         int temp;
         result[2] = primes[left];
         result[3] = primes[right];
         
         if (5 + primes[left] + primes[right] == N || 4 + primes[left] + primes[right] == N){
               
         for(int i = 0; i < 3; i++){
                 if(result[i] > result[i+1]){
                              temp = result[i];
                              result[i] = result[i+1];
                              result[i+1] = temp;
                              }
         }
         cout << result[0];
         for(int i = 1; i < 4;i++){
                 cout << " " << result[i];
         }
         cout << endl;
         }
         else
         cout << "Impossible." << endl;
         
         
    }
    return 0;
}
