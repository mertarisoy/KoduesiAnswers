#include <iostream>
using namespace std;

int main(){
    
    int test,n,number;
    cin >> test;
    while (test--){
          
          cin >> n;
          int matrix[n][n];
          
          
          for(int i = 0; i < n;i++){
                  for(int j = 0; j < n;j++){
                     cin >> number;
                     matrix[i][j] = number;
                  }
          }
          for(int i = 1;i < n; i++){
                  for(int j = n-i; j < n ;j++){
                          cout << matrix[i][j] << " ";
                          }
                  cout << endl;
          }
                          

          
          }
    
    return 0;
}