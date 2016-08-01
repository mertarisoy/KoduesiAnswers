#include <iostream>
using namespace std;


int main(){
    
    
    int a,b,c;
    cin >>a >> b >> c;
    while (a != 0 || b != 0 || c!=0){
          
          if(a <= b && a <= c && b <= c)
          cout << a << " " << b << " " << c<< endl;
          else if (a <= b && a <= c && c <= b)    
          cout << a << " " << c << " " << b<< endl;
          else if (b <= a && b <= c && c <= a)    
          cout << b << " " << c << " " << a<< endl;
          else if (b <= a && b <= c && a <= c)    
          cout << b << " " << a << " " << c<< endl;
          else if (c <= a && c <= b && a <= b)    
          cout << c << " " << a << " " << b << endl;
          else if (c <= a && c <= b && b <= a)    
          cout << c << " " << b << " " << a << endl;
          
          cin >> a >> b >> c;
          
          
          }
    
    return 0;
}