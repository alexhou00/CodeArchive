#include <iostream>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int a, b;
	cin >> a >> b;
	cout << ((((b/2)+1)*(b/2)))-(((((a-1)/2)+1)*((a-1)/2)));
	return 0;
}
