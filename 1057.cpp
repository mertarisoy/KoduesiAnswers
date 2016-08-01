#include <iostream>
#include <cmath>

using namespace std;

int perfectNumber(int number)
{
    int sum=1,i;
        
        if (number == 1)
        return 0;
        
        for (i = 2; i <= sqrt(number); i++){
            if (number % i == 0){
                if (i != number/ i)
                sum = sum + i + number/i ;
                else
                sum = sum + i;
            }
            }
        
        if (number == sum)
        return 1;
        else
        return 0;
        
} 

int main(){
    
    
    int test,m,n,counter=0;
    cin >> test;
    while(test--)
    {
          
          cin >> m >> n;
          while(m <= n)
          {
                if (perfectNumber(m))
                {
                     counter++;
                }
                m++;
          }
          
    cout << counter << endl;
    counter = 0;
        
    }
       
    return 0;
}
