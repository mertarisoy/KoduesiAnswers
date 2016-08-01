#include <stdio.h>

int isPalindrome(int x);

int main (){
    
    int test,counter=0,n,m,i,j;
    
    scanf("%d", &test);
    int result[test];
    
    for (i = 0; i < test; i++){
        
        scanf("%d%d", &m, &n);
        for (j = m; j<= n; j++){
            if (isPalindrome(j))
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

int isPalindrome(int x){
    
    int temp,reverse=0;
    
    temp = x;
    while (temp){
          
          reverse = reverse * 10 + temp% 10;
          temp = temp / 10;
          }
    if (reverse == x)
    return 1;
    else
    return 0;
}
