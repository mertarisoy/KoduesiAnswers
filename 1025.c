#include<stdio.h>

int main(){

    int test,number,digit,max = 0,i;
    
    scanf("%d", &test);
    int result[test];
    
    for (i = 0; i<test; i++){
        
       scanf("%d", &number);
       while (number){
             digit = number % 10;
             if (digit > max)
             max = digit;
             number = number / 10;
             }
       result[i] = max;
       max = 0;
       
       }
    
    for (i = 0; i < test; i++){
        
        printf("%d\n", result[i]);
       
        }
    
    return 0;
}
