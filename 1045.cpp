#include <iostream>
using namespace std;

int main(){
    
    int test,number,counter=0,max=0,posn=0,k,n,i;
    
    cin >> test;
    while(test--)
    {
                 cin >> k >> n;
                 int result[n];
                 for(i = 0; i < n; i++)
                 {
                       cin >> number;
                       result[i] = number;
                 }
                 for(i = 0; i < n; i++)
                 {
                       if (result[i] == k)
                       {
                              counter++;
                              if (counter > max)
                              {
                              max = counter;
                              posn = i +1;
                              }
                       }
                       else 
                       {
                            counter = 0;
                       }
                 }
                 cout << posn - max + 1<< " " << posn << " " << max << endl; 
                 counter = 0;
                 max = 0;
                 posn = 0;                                              
    }
    
    return 0;
}
