#include <iostream>
#include <algorithm>
using namespace std;

string word[20000];

int compare(string a, string b);

int main(){
	int n;
	cin>>n;
	
	for(int i=0; i<n; i++){
		cin>>word[i];
	}
	sort(word, word+n, compare);
	for(int i=0; i<n; i++){
		if(word[i]==word[i-1]) continue;
		cout<<word[i]<<"\n";
	} 
	
	return 0;
}

int compare(string a, string b){
	if(a.length() == b.length()) return a < b;
	return a.length() < b.length();
}