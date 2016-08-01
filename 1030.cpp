#include <iostream>

using namespace std;

int isPalindrome(int x){
    
    int temp,reverse=0;
    
    temp = x;
    while (temp){
          
          reverse = reverse * 10 + temp% 10;
          temp = temp / 10;
          }
    if (reverse == x)
    return 1;
    else
    return 0;
}

int main(){
    
    int i=1,number,counter=0;
    cin >> number;
    while (number != 0){
      
      while (counter != number){
            if (isPalindrome(i))
            counter++;
            i++;
          }
       cout << i - 1 << endl;
       cin >> number;  
       counter = 0;
       i = 1;     
       }    
    return 0;
}
