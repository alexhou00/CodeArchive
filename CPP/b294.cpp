#include <iostream>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, t=0, a;
	cin >> n;
	for (int i=0;i<n;i++){
		cin >> a;
		t+=(i+1)*a;
	}
	cout << t;
	return 0;
}
