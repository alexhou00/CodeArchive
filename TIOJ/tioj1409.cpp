#include <iostream>
using namespace std;

int main(){
	long long n, a, sum, mx;
	while (cin >> n){
		sum = mx = 0;
		for (long long i=0;i<n;i++){
			cin >> a;
			sum += a;
			mx = max(mx, a);
		}
		if (sum-mx>mx){
			cout << "YES\n";
		}
		else {
			cout << "NO\n";
		}
	}
	return 0;
} 
