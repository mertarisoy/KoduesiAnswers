#include <iostream>
using namespace std;

int main(){
    
    int test,number,i;
    cin >> test;
    
    while(test--)
    {
          cin >> number;
          while(number != 1)
          {
                  for(i = 2 ; i < 10; i++)
                  {
                        if(number % i == 0){
                        number /= i;
                        cout << i << " ";
                        break;
                        }
                  }
          }
          cout << endl;
                               
    }                 
                 
    return 0;
}
