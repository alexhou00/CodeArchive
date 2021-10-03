#include <iostream>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	unsigned short n, a;
	int arr[3] = {0};
	cin >> n;
	for (int i=0;i<n;i++){
		cin >> a;
		arr[a%3] += 1;
	}
	for (int j=0;j<3;j++){
		cout << arr[j] << ' ';
	}
	return 0;
}
