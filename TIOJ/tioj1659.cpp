#include <iostream>
using namespace std;

int main(){
	int n;
	while (cin >> n){
		cout << "primes between 1 ~ " << n << ": ";
		for (int i=2;i<=n;i++){
			bool isPrime = true;
			
			for (int j=2;j<i;j++){
				if (i%j==0){
					isPrime = false;
					break;
				}
			}
			if (isPrime) cout << i << ' ';
		}
		cout << '\n';
	} 
	return 0;
}
