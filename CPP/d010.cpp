#include <iostream>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	while (cin >> n){
		int sum = 0;
		for (int i=1;i*i<=n;i++){
			if (n%i==0){
				sum+=i;
				if (n/i!=i && n/i!=n){
					sum+=n/i;
				}
			}
		}
		if (sum==n) cout << "完全數\n";
		else cout << ((sum>n) ? "盈數\n" : "虧數\n");
	}
	return 0;
}
