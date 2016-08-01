#include <iostream>
#include <cmath>
using namespace std;
 
int sumDiv(int n){
    
    if( n == 1)
    return 0;
         
    int sum = 1;
    int sqrtN = (int)sqrt(n);
    for (int i = 2; i  < sqrt(n); i++)
    {
        if (n % i == 0){
              sum += i + n / i;
              }
    }  
    if (sqrtN * sqrtN == n)
        sum += sqrtN;
        return sum;
}   
         
int main(){
    
    int test,counter=0,m,n,i,a,b;
    cin >> test;
    while(test--)
    {
        cin >> m >> n;
        for(i = m; i <= n; i++){
              a = sumDiv(i);
              b = sumDiv(a);
              if (i != a && i == b && i < a){
                   //cout << i << " " << a << endl;
                   counter++;
                   }
        }
        cout << counter << endl;
        counter = 0;
    }
    //system("pause");
    return 0;
}

