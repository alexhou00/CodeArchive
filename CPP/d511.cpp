#include <iostream>
using namespace std;

int main(){
	int a, b, c, cnt=0;
	while (cin >> a >> b >> c){
		if (a+b>c&&b+c>a&&c+a>b) cnt++;
	}
	cout << cnt; 
	return 0;
}
