#include <iostream>
using namespace std;

int main(){	
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t, n;
	cin >> t;
	for (int i=0;i<t;++i){
		cin >> n;
		bool isLeapYear = false;
		if (n%400==0) isLeapYear = true;
		else if (n%100==0) isLeapYear = false;
		else if (n%4==0) isLeapYear = true;
		if(isLeapYear) cout << "Case "<<i+1<<": " << "a leap year\n";
		else cout << "Case "<<i+1<<": " << "a normal year\n";
	}
	return 0;
}
