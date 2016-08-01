#include <iostream>

using namespace std;

int find(string array[],int size,string test){
    
    int i;
    for (i = 0; i < size;i++){
        if (array[i] == test)
        return 0;
        }
    
    return 1;
}

int palindrome (string word){
    
    int length,i;
    string reverse;
    
    length = word.length();
    if (length == 1)
    return 1;
    
    for (i = 0 ; i < length -1 ; i++){
        reverse[i] = word[length - i -1];
        }
    
    for ( i = 0; i < length - 1; i++){
        if (word[i] != reverse[i])
        return 0;
        }
        
    return 1;        
}

int sortString(string a,string b){
    
    int i;
    while (a[i] != '\0' || b[i] != '\0'){
        
        if (a[i] == b[i]){
                i++;
                }
           else if (a[i] < b[i]){
                return -1;
                }
           else if (a[i] > b[i]){
                return 1;
                }
           }
           
           return 0; 
          }
                   

int main(){
    
    int test,length,border,counter=0,i,j,k=0,z;
    string word,temp,substr;
    string result[100];
    cin >> test;        
    while (test--){
          
          cin >> word;
          length = word.length();
          border = length;
          for (i = 0; i < length + 1; i++,border--){
              for (j = 1 ; j < border +1; j++){
                  //cout << i << " " << j << endl;
                  substr = word.substr(i,j);
                  if (palindrome (substr) && find(result,100,substr) == 1){
                              result[k] = substr;
                              k++; 
                              counter++;  
                              }
              }
          }
          for (i = 0; i < k - 1; i++){
              for (j = 0; j < k - 1; j++){
               if(sortString(result[j],result[j+1]) == 1){
                   temp = result[j];
                   result[j] = result[j+1];
                   result[j+1] = temp;
                   }
               }
          }
              
              
          cout << counter ;
          for (i = 0; i < k ; i++){
              cout <<  " " << result[i];
              result[i].clear();
              }
          cout << endl;
          counter = 0;
          k = 0;
          
          }
    return 0;   
}
