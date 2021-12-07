#include <iostream>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, x=0, y, z=0;
	cin >> n;
	for (int i=0;i<n;i++){
		cin >> y;
		x = max(x, y);
		z = max(z, x-y);
	}
	cout << z;
	return 0;
}
