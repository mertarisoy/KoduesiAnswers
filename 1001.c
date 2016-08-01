#include<stdio.h>

int main (void){
    
    int number,test,lastdigit,total = 0,x,i;
    
    scanf("%d", &test);
    int result[test];
    
    for(i = 0; i < test; i++){
          
      scanf("%d", &number);
      lastdigit = number % 10;
      
          while(number){
                  
                    x = number % 10;
                    number = number /10;
                    total = total + x;
                       }
      if (total % lastdigit == 0)
      result[i] = 1;
      else
      result[i] = 0;
      total = 0;
      }
      
    
    for (i = 0; i< test ; i++){
     if (result[i])
     printf("po\n");
     else
     printf("jo\n");
     }
   
    return 0;
}
