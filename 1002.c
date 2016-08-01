#include <stdio.h>

int sumofdigits(int x);

int main (){
    
    int test,counter=0,n,m,i,j;
    
    scanf("%d", &test);
    int result[test];
    
    for (i = 0; i < test; i++){
        
        scanf("%d%d", &m, &n);
        for (j = m; j<= n; j++){
            if (sumofdigits(j) == sumofdigits(j*j))
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

int sumofdigits(int x){
    
    int y,result=0;
    while (x){
          
          y = x % 10;
          x = x / 10;
          result += y;
          }
    
    return result;
}
