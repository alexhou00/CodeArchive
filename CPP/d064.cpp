#include <iostream>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	cout << ((n%2) ? "Odd" : "Even");
	return 0;
}
