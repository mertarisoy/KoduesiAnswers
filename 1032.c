#include <stdio.h>

int FindSum (int number);

int main(){

    int test,number,digit,max=0,maxNumber=0,i,j,n;
    
    scanf("%d", &test);
    int result[test];
    
    
    for (i = 0; i<test; i++){
        
        scanf("%d", &n);
        for(j = 0; j < n; j++){
              
              scanf("%d", &number);
              if(FindSum(number) > max){
                                 max = FindSum(number);
                                 maxNumber = number;
                                 }
                   }
        result[i] = maxNumber;
        max = 0;
        maxNumber = 0;
        
        
        }
    
    for (i = 0; i < test; i++){
        printf("%d\n", result[i]);
        
        }
    
    return 0;
}

int FindSum(int number){
    
    int digit,sum=0;
    while (number){
                   digit = number % 10;
                   sum += digit;
                   number = number / 10;
                   }
    return sum;
}
