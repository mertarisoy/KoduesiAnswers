#include <stdio.h>


void writeLine(int space,int star){

    int i;
    for (i = 0; i < space ; i++){
        printf(" ");
    }
    for (i = 0; i < star ; i++){
        printf("*");
    }
    printf("\n");


}
int main(){

    int test,number,spaces,stars,i;

    scanf("%d", &test);
    while (test--){

        scanf("%d", &number);
        if(number == 1){
            printf("   *\n*****\n   *");
            continue;
        }
        spaces = number * 3;
        stars = 1;

        for(i = 1; i <= number + number / 2 ; i++){
            if (i == number + 1){
                stars = stars + spaces;
                spaces = 0;
                }

            writeLine(spaces,stars);
            stars++;
            }
            writeLine(spaces,stars);
            stars--;
        for(i = number + number / 2; i > 0; i--){
            if (i == number ){
                spaces = number*3;
                stars = stars - spaces;
                }
            writeLine(spaces,stars);
            stars--;

        }
    }

    return 0;

}
