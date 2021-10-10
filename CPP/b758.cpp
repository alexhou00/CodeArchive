#include <iostream>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int x, y, a, h, m;
	char x1, x2, y1, y2;
	cin >> x >> y;
	a = (x*60+y+150)%1440;
	h = a/60;
	m = a%60;
	x1 = h/10 + '0';
	x2 = h%10 + '0';
	y1 = m/10 + '0';
	y2 = m%10 + '0';
	cout << x1 << x2 << ':' << y1 << y2;
	return 0;
}
