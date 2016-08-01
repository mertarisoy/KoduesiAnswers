#include <iostream>
#include <string>
using namespace std;

int main(){
    
    int test,i,j,counter=0;
    char fav;
    string sentence;
    
    cin >> test;
    int result[test];
       
    for(i = 0; i < test; i++){
          
          cin >> fav;
          getline(cin,sentence);
          
          for (j = 0; j < sentence.length(); j++){
              if ( sentence[j] == fav)
              counter++;
              }
              
          result[i] = counter;
          counter = 0;
          
          }
    
    for(i = 0; i < test; i++){
          cout << result[i] << endl;
          }
    
    return 0;
}
