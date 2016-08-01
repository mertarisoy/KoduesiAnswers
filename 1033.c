#include <stdio.h>

int getFirstDigit (int x){
    
    int digit;
    while (x){
          digit = x;
          x /= 10;
          }
    return digit;
}

int main(){
    
    int test,n,number,i,j,max=0,maxNumber=0;
    
    scanf("%d", &test);
    
    for (i = 0; i < test; i++){
        
        scanf("%d", &n);
        for (j = 0; j < n; j++){
            
            scanf("%d", &number);
            if (getFirstDigit(number) > max){
               max = getFirstDigit(number);
               maxNumber = number;
               }
            }
        printf("%d\n" , maxNumber);
        maxNumber = 0;
        max = 0;
        
        
        
        }
        
    return 0;
}
