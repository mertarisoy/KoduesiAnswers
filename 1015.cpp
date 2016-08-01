#include <iostream>
using namespace std;
int fibonacci(int n,int modulo){
    
    unsigned long long k,a,b;
    if (n == 0)
    return 0;
    
    if (n <= 2)
    return 1;
    
    k = n /2;
    a = fibonacci(k+1,modulo);
    b = fibonacci(k,modulo);
    
    if (n % 2 == 1)
    return (a*a + b*b)%modulo;
    else
    return (b*(2*a-b))%modulo;
}
int main(){
    
    int test,m,n,modulo,repeater;
    cin >> test;
    while(test--){
                  
         cin >> m >> n;
         modulo = 2;
         repeater = 3;
         for(int i = 1; i < n;i++){
               modulo *= 2;
               repeater *= 2;
               }
         
         if(n == 0)
         cout << 0;
         else
         cout << fibonacci(m%repeater,modulo);
         
         if(test != 0)
         cout << endl;            
         }
    return 0;
}
