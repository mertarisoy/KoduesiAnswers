#include <iostream>
using namespace std;

int main(){
    
    int test,n;
    cin >> test;
    while (test--){
          
          cin >> n;
          int matrix[n+1][n+1];
          int spaces = 2*(n+1)-3;
          string spaces_before = "   ";
          for(int i = 0; i < n+1;i++){
                  matrix[i][0] = 1;
                  matrix[i][i] = 1;
          }
          for(int i = 2; i <= n;i++){
                  for(int j = 1; j < i;j++){
                          matrix[i][j] = matrix[i-1][j] + matrix[i-1][j-1];
                  }
          }
          for(int i = 0; i <= n;i++){
                  
                  for(int j= 0; j < spaces ;j++){
                                  cout << " ";
                  }
                  for(int j =0; j <= i;j++){
                          
                          if(matrix[i][j] < 10)
                          spaces_before = "   ";
                          else if(matrix[i][j] < 100)
                          spaces_before = "  ";
                          else if(matrix[i][j] < 1000)
                          spaces_before = " ";
                          
                          cout << spaces_before << matrix[i][j];
                  }
                  cout << endl;
                  spaces -= 2;
          }
          cout << endl;

          
          }
    
    return 0;
}