#include <iostream>
using namespace std;

int main(){
    int test,number,sum=0,helper,n,min;
    
    cin >>test;
    while(test--){
                  
           cin >> number >> n;
           int denomi[n];
           for(int i = 0; i < n; i++){
                    cin >> helper;
                    denomi[i] = helper;
                    }
                    
           for(int i = 0; i < n; i++){
                   for(int j = 0; j < n-1; j++){
                        if(denomi[j] > denomi[j+1]){
                                     helper = denomi[j];
                                     denomi[j] = denomi[j+1];
                                     denomi[j+1] = helper;
                        }
                    }
           }
                    
           int matrix[n][number+1];
           for (int i = 1; i <= number; i++){
                matrix[0][i] = i /denomi[0];
           }
           for(int i = 1; i < n; i++){
                for(int  j = 1; j <= number; j++){
                          helper = j;
                          for(int k = i; k >0; k--){
                              sum += (helper%denomi[k])/denomi[k-1];
                              helper = helper%denomi[k];
                          }    
                          matrix[i][j] = j/denomi[i] + sum;
                          if(matrix[i][j] > matrix[i-1][j]){
                                     matrix[i][j] = matrix[i-1][j];
                          }
                          sum = 0;
                }
           }
                   
           
           int used[n];
           for(int i = 0;i < n; i++){
                   used[i] = 0;
           }
           
           int i = n-1;
           int j =number;
           
           while(i >= 0){
              
              if(matrix[i][j] == matrix[i-1][j]){
                              i--;
                              continue;
              }
              
              used[i] = number/denomi[i];
              number = number - used[i]*denomi[i];
              i--;
           }
           for(i = 0; i < n; i++){
                 if(used[i] == 0)
                 continue;
                 cout << denomi[i] << " " << used[i] << endl;
                 }
           cout << endl;            
           sum = 0;  
                   
    }
    return 0;
}