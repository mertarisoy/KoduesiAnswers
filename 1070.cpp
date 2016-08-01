#include <iostream>
using namespace std;

int main(){
    
    int test,helper;
    cin >> test;
    while(test--){
                  
          int maxW,n,profit=0,maxProfit=0;
          cin >> maxW >> n;
          int items[2][n];
          for(int i = 0; i < n; i++){
                  cin >> helper;
                  items[0][i] = helper;
          }
          for(int i = 0; i < n; i++){
                  cin >> helper;
                  items[1][i] = helper;
          }
          //sort in valueable order.
          for(int i = 0; i < n; i++){
                   for(int j = 0; j < n-1; j++){
                           if((float)items[0][j]/(float)items[1][j] > (float)items[0][j+1]/(float)items[1][j+1]){
                                          helper = items[0][j];
                                          items[0][j] = items[0][j+1];
                                          items[0][j+1] = helper;
                                          helper = items[1][j];
                                          items[1][j] = items[1][j+1];
                                          items[1][j+1] = helper;
                           }
                   }
          }
          int W = maxW;
          maxW -= items[1][0];
          profit += items[0][0];
          for(int i = 1; i < n; i++){

                  for(int j = i; j >= 0 ;j--){
                          if(maxW >= items[1][j]){
                          profit += items[0][j];
                          maxW -= items[1][j];
                          }
                  }
                  if(profit > maxProfit){
                            maxProfit = profit;
                  }
                  profit = 0;
                  maxW = W;
          }
          cout << maxProfit << endl;
    }
    return 0;
}
