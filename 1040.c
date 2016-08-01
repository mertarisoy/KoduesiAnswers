#include <stdio.h>

int main(){
    
    int test,number,n,i,j,max=0,maxNumber,counter=0;
    scanf("%d", &test);
    while(test--){
                  
          scanf("%d", &n);
          int numbers[n];
          
          for(i = 0; i < n; i++){
                scanf("%d", &number);
                numbers[i] = number;               
                }
                              
          for(i = 0; i < n; i++){
                number = numbers[i];
                for(j = 0; j < n; j++){
                      
                      if  (numbers[j] == number)
                      counter++;
                      }
                if (counter > max){
                max = counter;
                maxNumber = number;
                }
                counter = 0;
                }
    printf("%d\n",maxNumber);
    max = 0;
    maxNumber = 0;        
                              
    }

    return 0;
}
