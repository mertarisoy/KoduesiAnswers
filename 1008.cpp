#include <iostream>
#include <string>
using namespace std;

int main(){
    
    int test,i,j,counter=0;
    char fav;
    string sentence;
    
    cin >> test;
    int result[test];
    getline(cin,sentence);
       
    for(i = 0; i < test; i++){
          

          getline(cin,sentence);
          
          for (j = 0; j < sentence.length(); j++){
              if ( (sentence[j] == 'a') || (sentence[j] == 'e') || (sentence[j] == 'i')|| (sentence[j] == 'o') || sentence[j] == 'u' || sentence[j] == 'y')
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
