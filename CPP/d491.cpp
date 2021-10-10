#include <iostream>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int a, b;
	cin >> a >> b;
	cout << ((((max(a,b)/2)+1)*(max(a,b)/2)))-(((((min(a,b)-1)/2)+1)*((min(a,b)-1)/2)));
	return 0;
}
