#include <stdio.h>

int mostFreq(int number){
    
    int i,freqDigit[10],digit,max = 0,maxNumber = 0;
    
    for ( i = 0; i < 10 ;i++){
            freqDigit[i] = 0;
            }
            
    while (number){
              
                  digit = number %10;
                  freqDigit[digit]++;
                  number /= 10;
                  }
                  
    for ( i = 1; i < 10 ;i += 2){
        if (freqDigit[i] > max){                 
            max = freqDigit[i];
            maxNumber = i;
         }
        }
        return max;
    }

int main(void){
    
    int test,i,n,number,maxFreq,max=0,maxNumber;

    scanf("%d", &test);
    for (i = 0; i < test; i++){
        
        scanf("%d", &n);
        while (n--){
           
           scanf("%d", &number);  
           maxFreq = mostFreq(number);
           if (maxFreq > max){
           max = maxFreq;
           maxNumber = number;
           }
           }
 
                      
        printf("%d\n", maxNumber);
        max = 0;
        maxNumber = 0;
        }
    return 0;
}
