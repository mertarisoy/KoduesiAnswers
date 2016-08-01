#include <iostream>
using namespace std;

void moveQueen(int m,int n,int array[][9],int fill){
     
     
     int i=m,j=n;
     for(i = 1; i< 9; i++){
           array[m][i] = fill;
           array[i][n] = fill;
     }
     i=m;
     j=n;
     while(i > 0 && j > 0){
             array[i][j] = fill;
             i--;
             j--; 
     }
     i = m;
     j = n;
     while(i < 9 && j < 9){
             array[i][j] = fill;
             i++;
             j++; 
     }
     i = m;
     j = n;

         
     while(j != 9 && i != 0){
         array[i][j] = fill;
         i--;
         j++;
     }
     while(j != 0 && i != 9){
         array[i][j] = fill;
         i++;
         j--;
     }      
}
int main(){
    
    int test,m,n,p,q,i,j;
    int board[9][9];
    
    cin >> test;
    while(test--){
          
          for(i = 0; i <9; i++){
                for(j = 0; j <9; j++){
                      board[i][j] = 0;
                }
          
          }        
          cin >> m >> n >> p >> q;
          
          moveQueen(m,n,board,1);
          moveQueen(p,q,board,0);
          board[m][n] = 2;
          board[p][q] = 2;
          
          for(i = 1; i <9; i++){
                for(j = 1; j <9; j++){
                      if (board[i][j] == 2)
                      cout << "K";
                      else if(board[i][j] == 1)
                      cout << "*";
                      else
                      cout << board[i][j];
                }
                cout << endl;
          }
          cout << endl;
          
          }
    return 0;
}
