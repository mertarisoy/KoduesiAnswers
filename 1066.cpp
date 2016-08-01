#include <iostream>
using namespace std;

int gcd(int s1,int s2){
     
    int a;
    while(s1)
    {
         a = s1;
         s1 = s2 % s1;
         s2 = a;
    }
    return s2;
} 

int main(){
    
    int test,n,m;
    cin >> test;
    while(test--){
        
        cin >> m >> n;
        if(n == 0){
             cout << "1 0 " << gcd(m,n) << endl;
             continue;
             }
        
        int q,r1,r2,s1,s2,t1,t2,temp;
        
        s1 = 1;
        s2 = 0;
        t1 = 0;
        t2 = 1;
        r1 = m;
        r2 = n;
        
        while(1){
                 
                q = r1/r2;
                temp = r2;
                r2 = r1%r2;
                r1 = temp;
                if(r2 == 0)
                break;
                
                temp = s2;
                s2 = s1 - q*s2;
                s1 = temp;
                temp = t2;
                t2 = t1 - q*t2;
                t1 = temp;
                
                
        }
        cout << s2 << " " << t2 <<" " << gcd(m,n) << endl;
        }
        
    return 0;
}
        
