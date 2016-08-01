#include <stdio.h>

void writeDesc(int x,int y){
     
     int i;
     for(i = 0; i < y; i++){
           printf("%d ", x);
           x--;
           }
     }

int main(){
    
    int test,i,j,k,number;
    scanf("%d", &test);
    for (i = 0 ;i < test; i++){
        
        scanf("%d", &number);
        for (j = 0; j <= number ;j++){
            writeDesc(number,j);
            printf("\n");
            
        }
        }
        
    return 0;
}
