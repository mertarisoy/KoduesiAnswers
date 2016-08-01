#include <stdio.h>

void writeStar(int x){
     
     int spaceCount,starCount,i,j;
     
     spaceCount = x - 1;
     starCount = 1;
     
     for (i = 1; i<= x;i++){
         for(j = 0; j < spaceCount; j++){
               printf(" ");
               }
               
         for(j = 0; j < starCount; j++){
               printf("*");
               }
         
         for(j = 0; j < spaceCount; j++){
               printf(" ");
               }
     printf("\n");
     spaceCount--;
     starCount += 2;
     }
     }
    

int main(){
    
    int test,number,i;
    scanf("%d", &test);
    for (i = 0 ;i < test; i++){
        
        scanf("%d", &number);
        writeStar(number);
        }
    return 0;
}
