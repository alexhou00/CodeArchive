#include <iostream>
using namespace std;

int gcd(int x, int y){
	if (y==0) return x;
	return gcd(y, x%y);
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int a, b;
	while (cin >> a >> b){
		cout << gcd(a, b) << '\n';
	}
	return 0;
}
