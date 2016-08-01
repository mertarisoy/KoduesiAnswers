#include <stdio.h>

int MaxValue (int array[], int n);
int MinValue (int array[], int n);


int main(){

    int test,number,i,j,n;
    
    
    scanf("%d", &test);
    int result[test];
    
    for (i = 0; i<test; i++){
        
        scanf("%d", &n);
        int numbers[n],max=0,min=0;
        
        for (j= 0; j < n; j++){
            scanf("%d", &number);
            if (number > max)
            max = number;
            if (number < min)
            min = number;
            } 
    
            result[i] = max + min;
        }
    
    for (i = 0; i < test; i++){
        printf("%d\n", result[i]);
        
        }
    
    return 0;
}
