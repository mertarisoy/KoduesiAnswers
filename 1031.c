#include <stdio.h>


int main(){

    int test,number,i,j,n;
    
    
    scanf("%d", &test);
    int resultMax[test];
    int resultMin[test];
    
    for (i = 0; i<test; i++){
        
        scanf("%d", &n);
        int numbers[n],max=0,min=0;
        
        for (j= 0; j < n; j++){
            scanf("%d", &number);
            if (j == 0)
            min = number;
            if (number > max)
            max = number;
            if (number < min)
            min = number;
            } 
    
            resultMax[i] =max;
            resultMin[i] =min;
        }
    
    for (i = 0; i < test; i++){
        printf("%d %d\n", resultMin[i],resultMax[i]);
        
        }
    
    return 0;
}
