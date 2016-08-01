#include <iostream>
using namespace std;

int main(){
    
    int test,maxRow,maxI,max,i,j;
    cin >> test;
    while (test--){
          
          cin >> maxRow;
          int numbers[maxRow][maxRow],numCopy[maxRow][maxRow];
          int path[maxRow][maxRow],resNumbers[maxRow];
          
          for (i = 0; i < maxRow; i++){
              for(int j = 0; j <= i; j++){
                      cin >> numbers[i][j];  
                      numCopy[i][j] = numbers[i][j];     
              }
          }
          // 0 is left and 1 is right
          for(i = 1; i < maxRow; i++){
            for(int j = 0; j <= i; j++){
                   if(i == j){ 
                        path[i][j] = 1;
                        numbers[i][j] += numbers[i-1][j-1];
                        }
                   else if(j == 0){
                        path[i][j] = 0;
                        numbers[i][j] += numbers[i-1][j];
                        }
                   else if(numbers[i-1][j] > numbers[i-1][j-1]){
                        path[i][j] = 0;
                        numbers[i][j] += numbers[i-1][j];
                        }
                   else{
                        path[i][j] = 1;
                        numbers[i][j] += numbers[i-1][j-1];
                        }
            }
          }
         max = numbers[maxRow - 1][0];
         maxI = 0;
         
         for(i = 1; i < maxRow; i++){
                 if (max < numbers[maxRow - 1][i]){
                         max = numbers[maxRow - 1][i];
                         maxI = i;
                 }
         }
          
         resNumbers[0] = numCopy[maxRow -1][maxI];
         for(i = 1; i < maxRow; i++){
               if(path[maxRow-i][maxI]){
                 resNumbers[i] = numCopy[maxRow-i-1][maxI-1];
                 maxI -= 1;
                 }
               else
                 resNumbers[i] = numCopy[maxRow-i-1][maxI];
         } 
         
         cout << resNumbers[maxRow-1];
         for(i = maxRow - 2; i >= 0; i--){
               cout << " " << resNumbers[i];
               }
         cout << endl;
       
    }
    return 0;
}
