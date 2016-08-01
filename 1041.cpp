#include <iostream>
using namespace std;

int getCycle (int number){
    
    int counter=1,i;
    long long n = number;
    
    while (n != 1){
                          
          if (n % 2 == 1){
                n += n/2 + 1;
                counter++;
          }          
          else{
            n /= 2;
          } 
          counter++;
    }
    return counter;
}

int main(){
    
    int cycle,longest=0,m,n,i,j;
    while (cin >> m >> n){
         
          if(m > n){
               i = n;
               j = m;
          }
          else{
               i =m;
               j =n;
          }
                      
          while(i <= j){
              cycle = getCycle(i);
              if (cycle > longest){
                  longest = cycle;
              }
              i++;
          }
          cout << m << " " << n << " " << longest << endl;
          longest = 0;
          }
           
    return 0;
}
// i feel like a stupid.
