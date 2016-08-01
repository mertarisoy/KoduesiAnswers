#include<stdio.h>
#include<math.h>

int main(){

    int test,number,sum=1,i;
    scanf("%d", &test);
    while(test--){

        scanf("%d", &number);
        for (i = 2; i <= sqrt(number); i++){
            if (number % i == 0){
                if (i != number/ i)
                sum = sum + i + number/i ;
                else
                sum = sum + i;
            }
            }
        if (number == 1)
        printf("0\n");
        else
        printf("%d\n", sum);
        sum = 1;
    }

    return 0;

}
