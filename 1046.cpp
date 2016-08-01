#include <iostream>
using namespace std;

int findNumber(int array[], int size, int number)
{
    int i;
    for(i = 0; i < size;i++)
    {
          if(array[i] == number)
          return 0;
    }
    return 1;
}

int main(){
 
    int test,n,size=0,preNumber=0,number,i;
    int result[20];
    
    cin >> test;
    
    while(test--)
    {
                 
          cin >> n;
          for (i = 0; i < 20; i++)
          {
              result[i] = 0;
          }
          
          cin >> preNumber;
          cout << preNumber;
          for ( i = 0 ; i < n -1; i++)
          {
              cin >> number;
              if (number != preNumber)
              {
                 cout << " " << number;
                 preNumber = number;
              }
          }
      cout << endl;
      preNumber = 0;        
              
    }    

    return 0;
    
}
