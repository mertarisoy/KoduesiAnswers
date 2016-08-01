#include <iostream>
using namespace std;

int main(){
    
    
    int test,a,b,c,d,sum1=0,sum2=0;
    cin >> test;
    while(test--)
    {
           cin >> a >> b >> c >> d;
           sum1 = a + d;
           sum2 = b + c;
           
           if (sum1 == sum2)
           cout << sum1;
           else if(sum1 < sum2)
           cout << sum1;
           else
           cout << sum2;
           cout << endl;
           
           sum1 = 0;
           sum2 = 0;
    }          

    return 0;
}
