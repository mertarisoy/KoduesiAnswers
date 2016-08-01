#include <stdio.h>

int prime(int n){
    
    int i;
    
    if(n <= 1)
    return 0;
    for (i = 2; i < n;i++){
        
        if(n % i == 0)
        return 0;
        }
    return 1;
}

int main(){
    
    int test,counter=0,i,m,n;
    
    scanf("%d", &test);
    while(test--){
                  
                  scanf("%d%d", &m,&n);
                  for(i = m; i <= n; i++){
                        
                        if(prime(i))
                        counter++;
                        }
    
    printf("%d\n" , counter);
    counter = 0;
    }
    return 0;
}
