#include <iostream>
using namespace std;

int main(){
	int n;
	while (cin >> n){
		bool isLeap = false;
		if (n%400==0) isLeap=true;
		else if (n%100==0) isLeap=false;
		else if (n%4==0) isLeap=true;
		if (isLeap) cout << "閏年\n";
		else cout << "平年\n";
	}
	return 0;
}
