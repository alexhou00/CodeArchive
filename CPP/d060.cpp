#include <iostream>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	short m;
	cin >> m;
	cout << (0-m+85)%60;
	return 0;
}
