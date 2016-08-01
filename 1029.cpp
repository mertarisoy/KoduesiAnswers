#include <iostream>
using namespace std;

int prime(int n){
    
    int i;
    
    if(n <= 1)
    return 0;
    for (i = 2; i < n;i++){
        
        if(n % i == 0)
        return 0;
        }
    return 1;
}

int wordWeight(string word){
    
    int i,length,sum=0;
    
    length = word.length();
    for (i = 0 ; i < length ; i++){
        
        if (word[i] > 96 && word[i] < 123)
        sum += word[i] - 96;
        else
        sum += word[i] - 38;
        }
    return sum;
}

int main(){
    
     string word;
     while (cin >> word){
          if (prime(wordWeight(word)) == 1)
          cout << "It is a prime word." << endl;
          else
          cout << "It is not a prime word." << endl;
          }
    
    return 0;
}
