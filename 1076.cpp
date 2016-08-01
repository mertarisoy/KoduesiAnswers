#include <iostream>
using namespace std;

int main(){
    
    
    int test,n,number,i,min = 0,counter = 0;
    cin >> test;
    while(test--)
    {
           cin >> n;
           for (i = 0; i < n; i++)
           {
               cin >> number;
               if (number > min)
               {
                  min = number;
                  counter++;
               }
           }
           cout << counter << endl;
           min = 0;
           counter = 0;
                                        
    }          
    return 0;
}
