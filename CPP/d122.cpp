#include <iostream>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	long long n;
	while (cin>>n){
		long long cnt=0; 
		for (long long i=5;i<=n;i*=5){
			cnt += n/i;
		}
		cout << cnt << '\n';
	}
	return 0;
} 
