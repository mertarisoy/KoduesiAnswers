#include <iostream>
using namespace std;


void print(int comb[], int size) {
  for(int i = 0; i < size; ++i) cout << comb[i]+1 << ' ';
  cout << endl;
}
int next_comb(int comb[], int n, int k) {
  

  int i = k-1;
  ++comb[i];
  
  while(i > 0 && comb[i] >= n-k+1+i){
           --i;  
           ++comb[i];
  }
  if(comb[0] > n-k)
  return 0;
  
  for(i = i+1; i < k; i++) 
  comb[i] = comb[i-1] + 1;
  
  return 1;
}
void combinations(int comb[], int n, int k, int &cnt) {
     
  for(int i = 0;  i < k;  ++i) 
  comb[i] = i;
  
  print(comb, k);
  cnt++;
  
  while(next_comb(comb, n, k)){ 
              print(comb, k);
              cnt++;
  }

  return;
}

int main() {
  int T, n, k, comb[10], cnt;
  cin >> T;
  while(T--) {
    cin >> n >> k;
    cnt = 0;
    combinations(comb, n, k, cnt);
    cout << cnt << endl;
  }
  return 0;
}
