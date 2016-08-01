#include <iostream>
using namespace std;

int main(){
    
    string input;
    int pos = 2,sum = 0;
    int last5[5] = {9,9,0,9,7}; 
    cin >> input;
    if(input == "test")
    cout << "test";
    else{
    while(last5[0] != 1 || last5[1] != 9 || last5[2] != 9 || last5[3] != 0){
    
    for(int i = 0; i < 4; i++){
            last5[i] = last5[i+1];
            sum += last5[i];
            
            } 
                    
    last5[4] = sum % 10;
    pos++;
    sum = 0;
    
    }
    cout << pos;
    }
    return 0;
}
