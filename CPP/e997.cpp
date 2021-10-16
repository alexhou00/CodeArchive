#include <iostream>
#include <sstream>
using namespace std;

int main(){
	ios::sync_with_stdio(0), cin.tie(0);
	string line, names[50];
	int cnt=0, pick;
	getline(cin, line);
	stringstream ss;
	ss<<line;
	while(ss>>names[cnt]){
		cnt++; 
	}
	cin >> pick;
	cout << names[cnt-pick] << '\n';
}
