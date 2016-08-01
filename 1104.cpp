#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main(){

int t;
cin >> t;

while(t--){
	
	string s;
	cin >> s;
	
	vector<char> chars;
	vector<char> nonChars;
	
	
	for(int i= 0;i < s.length();i++){
		if(s[i] >= 'b' && s[i] <= 'z' && s[i] != 'e' && s[i] != 'u' && s[i] != 'i' && s[i] != 'o')
		chars.push_back(s[i]);
		else
		nonChars.push_back(s[i]);
	}
	
	sort(chars.begin(),chars.end());
	for(int i = 0; i< chars.size();i++){
		cout << chars.at(i);
	}
	
		for(int i = 0; i< nonChars.size();i++){
		cout << nonChars.at(i);
	}
	cout << endl;
	

}

return 0;
}