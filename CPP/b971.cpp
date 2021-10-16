#include <iostream>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int a1, an, d;
	cin >> a1 >> an >> d; 
	for (int i=a1;i!=an;i+=d){
		cout << i << ' ';
	}
	cout << an;
	return 0;
}
