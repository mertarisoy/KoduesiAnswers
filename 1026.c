#include <stdio.h>

int main(){
    
    int test,i,m,n,numberFreq[11] = {0},digit,max = 0,maxNumber = 0,number;
    scanf("%d", &test);
    while(test--){
     
          scanf("%d%d", &m, &n);
          for( i = m; i <= n; i++){
               
               number = i;
               while(number){
                   digit = number % 10;
                   number /= 10;
                   numberFreq[digit]++;
                   }
               }       
               
     for (i = 0; i < 11; i++){
         if (numberFreq[i] > max){
                    
                    max = numberFreq[i];
                    maxNumber = i;
                    }
           numberFreq[i] = 0;
         }
    
    printf("%d\n", maxNumber);
    max = 0;
    maxNumber = 0;                  
    }
 
    return 0;
}
