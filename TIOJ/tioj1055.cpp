#include <iostream>
using namespace std;

int main(){
	int a, b;
	cin >> a >> b;
	for (int i=a;i!=b;i+=(b-a)/abs(b-a)){
		cout << string (i, '*') << "\n";
	}
	cout << string (b, '*');
	return 0;
}
