#include <iostream>
using namespace std;

int main(){
	string str;
	getline(cin,str);
	for (int i=0;i<str.size()-1;i++){
		cout << (int)str[i] << '_';
	}
	cout << (int)str[str.size()-1];
	return 0;
}
