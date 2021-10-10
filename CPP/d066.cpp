#include <iostream>
using namespace std;

int main(){
	int hh, mm, m;
	cin >> hh >> mm;
	m = hh*60+mm;
	if (m>=450 && m<1020) cout << "At School";
	else cout << "Off School";
	return 0;
}
