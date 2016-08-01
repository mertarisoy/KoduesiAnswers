#include <iostream>
#include <map>
using namespace std;

int main(){


int t;
cin >> t;
while(t--){

string pattern;
cin >> pattern;

map<char,int> freq;
for(int i = 0; i < pattern.length();i++){
freq[pattern[i]]++;
}

char maxChar = 'z';
int maxCharCount =0;
char maxInt = '9';
int maxIntCount =0;

for(int i = 0; i < pattern.length();i++){
if(pattern[i] >= '0' && pattern[i] <= '9'){
if(freq[pattern[i]] > maxIntCount){
maxInt = pattern[i];
maxIntCount = freq[pattern[i]];
}
else if(freq[pattern[i]] == maxIntCount && pattern[i] < maxInt){
maxInt = pattern[i];
maxIntCount = freq[pattern[i]];
}
}
else if((pattern[i] >= 'b' && pattern[i] <= 'z') && pattern[i] != 'e' && pattern[i] != 'i' && pattern[i] != 'u' && pattern[i] != 'o'){
if(freq[pattern[i]] > maxCharCount){
maxChar = pattern[i];
maxCharCount = freq[pattern[i]];
}
else if(freq[pattern[i]] == maxCharCount && pattern[i] < maxChar){
maxChar = pattern[i];
maxCharCount = freq[pattern[i]];
}

}

}
if(maxIntCount == 0 && maxCharCount == 0){
cout << 0 << endl;
continue;
}
if(maxCharCount != 0)
cout << maxChar << " " << maxCharCount << " ";
if(maxIntCount != 0)
cout << maxInt << " " << maxIntCount;

cout << endl;

}

return 0;
}