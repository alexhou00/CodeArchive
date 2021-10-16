#include <iostream>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	string str;
	cin >> str; 
	for (int i=0;i<str.size()-1;i++){
		cout << str[i] << '-';
	}
	cout << str[str.size()-1];
	return 0;
}
