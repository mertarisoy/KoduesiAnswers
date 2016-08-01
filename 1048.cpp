#include <iostream>
using namespace std;

int main(){
    
    int test,n1,n2,cnt = 0;
    cin >> test;
    while(test--){
        
        cin >> n1 >> n2;
        while(n1 || n2){
                 
                 if(n1 % 10 != n2 % 10)
                 cnt++;
                 
                 n1 /= 10;
                 n2 /= 10;
        }
        
        cout << cnt << endl;
        cnt = 0;
        }    
    return 0;
}
