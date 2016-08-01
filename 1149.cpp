#include<iostream>
#include<string>

using namespace std;

int main(){
	
	int t;
	scanf("%d", &t);
	
	string arr[] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
	
	while(t--){
		
		int n;
		scanf("%d", &n);
		cout << arr[n/1000] << endl;
	}
}