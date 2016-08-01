#include <iostream>
#include <cmath>

using namespace std;

int main(){
    
    int test,m,n,i,cnt = 0,nextPrime = 2;
    cin >> test;
    
    while(test--)
    {
                 cin >> m >> n;
                 int * numbers = new int[n + 1];                 
                 int maxPrime = (int)ceil(sqrt(n));
                 numbers[1] = -1;
                 
                 for(i = 2; i <= n; i++){
                       numbers[i] = 0;
                 }

                 while(nextPrime < maxPrime){
                       if (numbers[nextPrime] != 0){
                            nextPrime++;
                            continue;
                            }
                          
                       for(int i = nextPrime * nextPrime; i <= n; i += nextPrime){
                               numbers[i] = -1;
                       }
                       nextPrime++;
                 }
                 

                 for(i = m; i <= n - 2 ; i++){
                       if (numbers[i] == 0 && numbers[i+2] == 0){
                          cnt++;
                       }      
                 } 
                 cout << cnt << endl;
                 cnt = 0;
                 nextPrime = 2;
                 delete[] numbers;
    }  
    return 0;
}