#include <iostream>
using namespace std;

          
int main(){
    
    int test,K,row,column,i,j,k,number;
    cin >> test;
    while(test--)
    {
           cin >> K;
           cin >> row >> column;
           int matrix[row][column];
           int tempRow[column];
           for (i = 0; i < row; i++)
           {
               for (j = 0; j < column; j++)
               {
                  cin >> number;
                  matrix[i][j] = number;
               }  
           }
               for(i = 0; i < row; i++)
               {
                     for (j = 0; j < row - 1 ; j++)
                     {
                         if (matrix[j][K] > matrix[j+1][K])
                         {
                            for (k = 0; k < column; k++)
                            {
                                tempRow[k] = matrix[j][k];
                            }
                            for (k = 0; k < column; k++)
                            {
                                 matrix[j][k] = matrix[j + 1][k];
                            }
                            for (k = 0; k < column; k++)
                            {
                                 matrix[j + 1][k] = tempRow[k];
                            }
                         }
                     }
               }
           for(i = 0; i < row; i++)
           {
                  for(j = 0; j < column; j++)
                  {
                        cout << matrix[i][j] << " ";
                  }
                  cout << endl;
           }
           
    }          

    return 0;
}
