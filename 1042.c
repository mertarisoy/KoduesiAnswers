#include <stdio.h>

int main(){
    
    int test,n,i,j,k,fillNumber = 0,lap,multipler,posn=1;

    
    
    scanf("%d", &test);
    while (test--){
          
          scanf("%d", &n);
          int numbers[n*n+1];
          lap = n-1;
          for(i = 0; i < n; i++){
                 fillNumber++;
                 numbers[posn] = fillNumber;
                 posn++;
                 }
          for (i = 1; i < n  ; i++){
          
              for(j = 0; j < 2; j++){
                if (j == 0)
                multipler = n;
                else
                multipler = -1;
                
                
                for(k = 1; k <= lap ; k++){
                      if (i % 2 == 0){
                            fillNumber -= multipler;
                            numbers[fillNumber] = posn;
                            posn++;
                            //printf("--%d--", posn);
                            }
                      else{
                           fillNumber = fillNumber + multipler;
                           numbers[fillNumber] = posn;
                           posn++;
                           //printf("--%d--", posn);
                           }
                }
              }
          lap--;
          
          } 
     for(i = 1 ;i <= n*n; i++){    
        printf("%d ", numbers[i]);
        if(i % n == 0)
            printf("\n"); 
        } 
        fillNumber = 0;
        posn = 1;
     }       
    
    return 0;
}
