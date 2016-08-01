#include <iostream>
using namespace std;

int main(){
    
    int test,m,n,number;
    cin >> test;
    while (test--){
          
          cin >> m >> n;
          int matrix[m*n];
          
          for(int i = 0; i < m*n;i++){
                     cin >> number;
                     matrix[i] = number;
                  }
          
          for(int i = 0; i < m*n/2;i++){
                 matrix[m*n-1-i] = matrix[i];
                  } 
          
          
          for(int i = 0; i < m*n;i=i+n){
                  cout << 0;
                  for(int j=0;j < n-1;j++){
                          cout << " " << matrix[i+j];
                  }
                  cout << endl;
                  
          
          }
          cout << endl;
          
          }
    
    return 0;
}