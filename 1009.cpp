#include <stdio.h>
#include <math.h>

int intLength(int x){
    
    int counter=0;
    while (x){
          x /= 10;
          counter++;
          }
    return counter;
}
          

int main(){
    
    int test,counter=0,length,multipler,i,a,b,m,n;
    scanf("%d", &test);
    
    for ( i = 0; i < test ; i++){
        
        scanf("%d%d", &m, &n);
        
        while (m != n){
              length = intLength(m);
              //if the length is odd
              if (length % 2 == 1){
                            m++;
                            continue;
                            }
              //set divisor to half of the number length
              if (length == 2)
              multipler = 10;
              else if (length == 4)
              multipler = 100;
              else if (length == 6)
              multipler = 1000;
              
              //take first part       
              a = m / multipler;
              //take second part
              b = m % multipler;
              
              //fancy check
              if ((a+b)*(a+b) == m){
              counter++;
              }

              m++;
              
            }
        printf("%d\n", counter);  
        counter = 0;
        
        }
    return 0;
}
