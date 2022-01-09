#include <iostream>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, h1, h2, m1, m2, m3;
	cin >> n;
	for (int i=0;i<n;i++){
		cin >> h1 >> m1 >> h2 >> m2 >> m3;
		m1 = h1*60+m1;
		m2 = h2*60+m2;
		cout << ( (m1+m3<=m2) ? "Yes\n" : "No\n");
	}
	return 0;
}
