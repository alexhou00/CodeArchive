#include <iostream>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	string str1, str2;
	while (cin >> str1 >> str2){
		cout << (str2[0]-str1[0]+26)%26 << '\n';
	}
	return 0;
}
