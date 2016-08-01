#include <iostream>
#include <string>
using namespace std;

int main(){
    
    int test,i,j,counter=0;
    string sentence;
    
    cin >> test;
    getline(cin,sentence);
       
    for(i = 0; i < test; i++){
          
          
          getline(cin,sentence);
          
          for (j = 0; j < sentence.length() ; j++){
              if ( sentence[j] != 32 && (sentence[j+1] == 32 || sentence[j+1] == '\0'))
              counter++;
              }
              
          cout << counter <<endl;
          counter = 0;
          
          }
    return 0;
}
