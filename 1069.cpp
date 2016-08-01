#include <iostream>
using namespace std;

//Print set
void print(int comb[], int size) {
  for(int i = 0; i < size; ++i) cout << comb[i]+1 << ' ';
  cout << endl;
}
int next_comb(int comb[], int n, int k) {
  
  //helper  
  int i = k-1;
  //increasing beacuse previous combination is printed.
  ++comb[i];
  
  /* if its end of the mid combination
  // in C(5,3)
  // after (1,2,5) is printed, its coming (1,2,6) 
  // and this is out of range. This means index i has reached
  // max number it can be.So, continue with previous index
  // then increase the previous and recheck it's in max limit.  */
  while(i > 0 && comb[i] >= n-k+1+i){
           --i;  
           ++comb[i];
  }
  //if its last conbination for C(n,k)
  if(comb[0] > n-k)
  return 0;
  
  //if not, set the values min can be (previous +1)
  for(i = i+1; i < k; i++) 
  comb[i] = comb[i-1] + 1;
  
  //will be continued.
  return 1;
}
void combinations(int comb[], int n, int k, int &cnt) {
     
  for(int i = 0;  i < k;  ++i) 
  comb[i] = i;
  
  print(comb, k);
  cnt++;
  
  //if has next.. then print;
  while(next_comb(comb, n, k)){ 
              print(comb, k);
              cnt++;
  }
  //if not, finish.
  return;
}

int main() {
  int T, n, comb[10], cnt;
  cin >> T;
  while(T--) {
    cin >> n;
    cnt = 1;
    
    //subsets = C(n,1) + C(n,2) + C(n,3) ... C(n,n)
    for(int i = 1;  i <= n;  ++i) 
    combinations(comb, n, i, cnt);

    //basicly power(2,n)
    cout << cnt << endl;
  }
  return 0;
}
// Nothing to say...
