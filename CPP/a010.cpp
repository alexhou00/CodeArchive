#include <iostream>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	for (int i=2; i<=n; i++){
		if ((n%i)==0){
			int count = 0;
			bool isLast = false;
			while ((n%i)==0) {
				count++;
				n/=i;
			}
			if (n==1) isLast = true;
			cout << i;
			if (count > 1) cout << "^" << count;  
			if (!isLast) cout << " * ";
		}
	}
	return 0;
} 
