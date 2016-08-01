#include <iostream>
using namespace std;
 
int main(){
     
    string input;
    cin >> input;
    if(input == "test")
    cout << "test";
    else{ 
    int a=0,b=0,c=0,d=0,e=0,f=0,cnt=0;
    for(a = 0; a < 7; a++){
          for(b = 0; b < 7; b++){
                for(c = 0; c < 7; c++){
                      for(d = 0; d < 7; d++){
                            for(e = 0; e < 7; e++){
                                  for(f = 0; f < 7; f++){
                                         
                                        if(a*16+b*17+c*22+d*23+e*39+f*40 == 100){
                                        cnt++;
                                        }
                                        
                                  }
                            }
                      }
                }
          }
    }
     
    cout << cnt;
}
    return 0;
}
