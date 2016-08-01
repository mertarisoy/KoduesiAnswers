#include <iostream>
#include <string>
using namespace std;

int findSub(string s1,string s2,int startPointS1){
    
    int firstPos = 0,cnt = 0;
    for(int i = startPointS1; i < s1.length();i++){
          for(int j = firstPos; j < s2.length();j++){
                if(s1[i] == s2[j]){
                     cnt++;
                     firstPos = j+1;
                     break;
                }
          }
    }
    return cnt;
}
int main(){
    
    int test,index,cnt;
    string s1,s2;
    cin >> test;
    while(test--){
            
            int max = 0;
            cin >> s1 >> s2;
            for(int i = 0 ; i < s1.length();i++){
                    cnt = findSub(s1,s2,i);
                    if(cnt > max)
                    max = cnt;
                    }
                    
            cout << max << endl;   
            
    }
    return 0;
}
