#include <iostream>
using namespace std;

float prime(int n){
    
    int i;
    
    if(n <= 1)
    return 0;
    for (i = 2; i < n;i++){
        
        if(n % i == 0)
        return 0;
        }
    return 1;
}

int power(int x, int y)
{
    int i,product=1;
    
    if (y == 0)
    return 0;
    
    for(i = 0; i < y;i++){
          product *= x;
          }
    return product;
}
          
int main()
{
    int test,counter=0,p=2,M=0,m,n,i;
    
    cin >> test;
    while(test--)
    {
          cin >> m >> n;
          while(M <= n)
          {       
                
                M = power(2,p) - 1;
                if (prime(M) && M <= n && M >= m)
                {
                   counter++;
                }
                p++;
          }
    cout << counter << endl; 
    counter = 0;
    M = 0;
    p = 2;
    }           
    return 0;
}
