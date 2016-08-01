#include <stdio.h>


int main(){

    int test,number,counter=0,i,j,n;
    
    
    scanf("%d", &test);
    int result[test];
    
    for (i = 0; i<test; i++){
        
        scanf("%d", &n);
        
        
        for (j= 0; j < n; j++){
            scanf("%d", &number);
            if (number > 0 && (number % 2 == 0))
            counter++;
            } 
    
            result[i] = counter;
            counter = 0;
        }
    
    for (i = 0; i < test; i++){
        printf("%d\n", result[i]);
        
        }
    
    return 0;
}
