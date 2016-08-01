#include <iostream>
using namespace std;

int main()
{
    int test,i,day=1;
    float A,N,sum;
    
    cin >> test;
    while(test--)
    {
          cin >> A >> N;
          sum = A;
          while(sum < N){
                  A = A + A/10;
                  sum += A;
                  day++;
                  }
    cout << day << endl;
    day = 1;
    sum = 0;
}
    
    return 0;
}
