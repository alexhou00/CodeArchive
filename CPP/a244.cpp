#include <iostream>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int n, a;
	long long b, c;
	cin >> n;
	for (int i=0;i<n;i++){
		cin >> a >> b >> c;
		if (a==1) {
			cout << b+c << endl;
		}
		else if (a==2) {
			cout << b-c << endl;
		}
		else if (a==3) {
			cout << b*c << endl;
		}
		else if (a==4) {
			cout << b/c << endl;
		}
	}
	return 0;
} 
