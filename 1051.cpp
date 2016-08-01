#include <iostream>
using namespace std;

int main(){
    
    int test,number,d1,d2,d3,max=0;
    cin >> test;
    while(test--){
                  
         cin >> number;
         if (number % 100 == 0){
                    cout << 1 << endl;
                    continue;
         }
         
         d1 = number % 10;
         number /= 10;
         d2 = number % 10;
         number /= 10;
         d3= number % 10;
         number /= 10;
    
         max = d1;
         if(d2 > max)
         max = d2;      
         if(d3 > max)
         max = d3;
    
            
         if(max == d2){
                if (d1 == d3)
                cout << 1;
                else
                cout << 2;
         } 
         else if(d2 == d1 || d2 == d3)
         cout << 1;
         else
         cout << 2;
         cout << endl;
              
    }
    return 0;
}
