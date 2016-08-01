#include <stdio.h>

int main (){
    
    int test,i,j,length,sum=0;
    char word[20];
    
    scanf("%d", &test);
    for (i = 0; i < test; i++){
        
        scanf("%s", word);
        length = strlen(word);
        for (j = 0; j < length; j++){
            
            sum = sum + word[j] - 96;
        }
    printf("%d\n", sum);
    sum = 0;
    }   
    
   
    return 0;
}
