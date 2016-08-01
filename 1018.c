#include <stdio.h>


int main(){

    int test,number,digit[33],counter=0,i,j=0;
    
    
    scanf("%d", &test);
   
    
    for (i = 0; i<test; i++){
        
           scanf("%d", &number);
           while (number){
                 digit[j] = number % 2;
                 number /= 2;
                 counter++;
                 j++;
                 }
           
       for (j = counter - 1; j >= 0;j--){
           printf("%d", digit[j]);
           }
       if (i != test - 1)
       printf("\n");    
       counter = 0;
       j=0;   
        
        
        }
    return 0;
}
