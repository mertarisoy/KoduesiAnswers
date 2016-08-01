#include <stdio.h>


int main(){

    int test,number,i,j,n;
    
    
    scanf("%d", &test);
    int result[test];
    
    for (i = 0; i<test; i++){
        
        scanf("%d", &n);
        int numbers[n],max=0;
        
        for (j= 0; j < n; j++){
            scanf("%d", &number);
            numbers[j] = number;
            } 
        
        for (j= 0; j < n/2; j++){
            if (numbers[j] + numbers[n-j-1] > max)
            max = numbers[j] + numbers[n-j-1];
            }
        result[i] = max;
        max = 0;
            
        }
    
    for (i = 0; i < test; i++){
       
           printf("%d\n", result[i]);
        }

    return 0;
}
