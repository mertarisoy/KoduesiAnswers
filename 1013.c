#include <stdio.h>

int SearchValue (int array[], int n, int searchElement){
     
     /* intiliazing variables. */
     int i;
     /* Enter the loop */
     for (i = 0 ; i < n ; i++){
         if(searchElement  == array[i]){ //if element exist in list
         return 0; 
         }
     }/* End loop */
       return 1;
}//end of the function

int main (){
    
    int test,i,j,length,sum=0;
    int used[20];
    char word[20];
    
    for(i = 0; i < 20;i++){
          used[i] = 0;
          }
          
    scanf("%d", &test);
    for (i = 0; i < test; i++){
        
        scanf("%s", word);
        length = strlen(word);
        for (j = 0; j < length; j++){
                if(SearchValue(used,j,word[j]))
                sum = sum + word[j] - 96;
                used[j] = word[j];
        }
    printf("%d\n", sum);
    sum = 0;
    }   
   
    return 0;
}
