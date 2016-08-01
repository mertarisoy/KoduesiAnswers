#include <iostream>
#include <cmath>
using namespace std;

int main(){
    
    
    int test,c1,c2,N,total;
    cin >> test;
    while(test--)
    {
          c1 = 1;
          c2 = 1;
          total = 1;
          cin >> N;

          for(c1 = 1; c1 <= sqrt(N); c1++)
          {
                 //total = c1 * c2 + c1 + c2;
                 
                 
                 for(c2 = c1; total <= N; c2++)
                 {
                     if ( c1 == c2)
                     c2++;
                     total = c1 * c2 + c1 + c2;
                     if (total == N)
                     {
                     cout << c1 << " " << c2 << endl;
                     break;
                     }
                     
                 }
                 total = 1;           
          }
          total = 1;
          c1 = 1;
          c2 = 1;
          }
                      
    return 0;
}
