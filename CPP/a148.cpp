#include <iostream>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, a;
	while (cin >> n){
		int t=0;
		for (int i=0;i<n;i++){
			cin >> a;
			t+=a;
		}
		if (t>59*n) cout << "no\n";
		else cout << "yes\n";
	}
	return 0;
}
