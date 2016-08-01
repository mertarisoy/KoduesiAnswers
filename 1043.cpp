#include <iostream>
using namespace std;

int main(){
    
    int p[3],test,h,m,temp;
    
    cin >> test;
    while(test--){
                  
            for(int i = 0; i < 3; i++){
                    
                    cin >> h >> m;
                    p[i] = h*60+m;
            }
    
            for(int i = 0; i < 3; i++){
                    for(int j = 0; j < 2; j++){ 
                            if(p[j] > p[j+1]){
                                    temp = p[j];
                                    p[j] = p[j+1];
                                    p[j+1] = temp;
                            }
                    }
            }
            
            if (p[0] + 10 >= p[1] && p[1] + 5 >= p[2])
            cout << "YES" << endl;
            else
            cout << "NO" << endl;
            }   
                                            
    return 0;
}
