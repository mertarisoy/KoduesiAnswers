#include <stdio.h>



int main (){
    
    int test,h,m,s,i;
   
    scanf("%d", &test);
    
    
    for (i = 0; i < test; i++){
        
        scanf("%d%d%d",&h,&m,&s);
        printf("%d:%02d:%02d\n", h,m,s);
        }
    
    return 0;
}
