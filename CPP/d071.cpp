#include <iostream>
using namespace std;

int main(){	
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	while(cin >> n){
		bool isLeapYear = false;
		if (n%400==0) isLeapYear = true;
		else if (n%100==0) isLeapYear = false;
		else if (n%4==0) isLeapYear = true;
		if(isLeapYear) cout << "a leap year\n";
		else cout << "a normal year\n";
	}
	return 0;
}
