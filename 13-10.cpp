#include <iostream>
#include <algorithm>
using namespace std;

struct Info{
	int age, idx;
	string name;
};

bool compare(Info a, Info b);

int main(){
	Info info[100000];
	int n;
	cin>>n;
	
	for(int i=0; i<n; i++){
		cin >> info[i].age >> info[i].name;
		info[i].idx=i;
	}
	sort(info, info+n, compare);
	for(int i=0; i<n; i++){
		cout << info[i].age << " " << info[i].name << "\n";
	} 
	
	return 0;
}

bool compare(Info a, Info b){
	if(a.age != b.age) return a.age < b.age;
	return a.idx < b.idx;
}