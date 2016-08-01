#include <stdio.h>

int main(){
    
    int test,i,j,number,digit,max=0,maxNumber;
    int freqDigit[10];

            
    scanf("%d", &test);
    for (i = 0; i < test; i++){
        
        for ( j = 0; j < 10 ;j++){
            freqDigit[j] = 0;
            }
            
        scanf("%d", &number);
        while (number){
              
              digit = number %10;
              freqDigit[digit]++;
              number /= 10;
              }
        
        for ( j = 0; j < 10 ;j++){
            if (freqDigit[j] > max){
                             
                 max = freqDigit[j];
                 maxNumber = j;
                 }
            }
        printf("%d\n", maxNumber);
        max = 0;
        maxNumber = 0;     
        }
    return 0;
}
