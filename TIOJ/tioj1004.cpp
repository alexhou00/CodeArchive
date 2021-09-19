#include <iostream>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	short n, a;
	cin >> n;
	for(a=1;a*2<=n;a<<=1);
	cout << ((n-a)*2+1);
	return 0;
}
