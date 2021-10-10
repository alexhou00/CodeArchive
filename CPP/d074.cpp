#include <iostream>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, mx=0;
	cin >> n;
	int arr[n];
	for (int i=0;i<n;i++){
		cin >> arr[i];
		if (mx<arr[i]) mx = arr[i];
	}
	cout << mx;
	return 0;
}
