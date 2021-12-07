#include <iostream>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	for (int i=0;i<n;i++){
		for (int j=0;j<(2*n-1-(2*i+1))/2;j++) cout << '_';
		for (int j=1;j<=2*i+1;j++){
			cout << '*';
		}
		for (int j=0;j<(2*n-1-(2*i+1))/2;j++) cout << '_';
		cout << '\n';
	}
	return 0;
}
