#include <iostream>
using namespace std;

void print(int array[],int size){
     for (int i = 0; i < size; i++){
     cout << array[i] << " ";
     }
}

void swap(int array[],int i,int j){
     
     int temp;
     temp = array[i];
     array[i] = array[j];
     array[j] = temp;
}
int next_perm(int array[], int size){
    
    int i = size-2;
    int j = size-1;
    while(array[i+1] < array[i]){
    i--;
    if(i == -1)
    return 1;
    }
    
    while(array[j] < array[i])
    j--;
    
    swap(array,i,j);
    i++;
    j = size-1;
    
    while(i < j){
            swap(array,i,j);
            i++;
            j--;
    }
    return 0;
    
}

    
int main(){
    
    int test,n;
    cin >> test;
    while(test--){
             cin >> n;
             if(n == 1){
                  cout << 1 << endl << 1 << endl;
                  continue;
             }
             
             int perm[n];
             int cnt = 1;
             for(int i = 0; i < n; i++){
                      perm[i] = i+1;
                      }
             print(perm,n);
             cout << endl;
             while(!next_perm(perm,n)){
                  cnt++;
                  print(perm,n);
                  cout << endl;
             }
             cout << cnt << endl;
    }      
    return 0;
}
