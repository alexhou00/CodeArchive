#include <iostream>
using namespace std;

bool isLeapYear(int n){
	bool isLeap;
	if (n%400==0) isLeap=true;
	else if (n%100==0) isLeap=false;
	else if (n%4==0) isLeap=true;
	else isLeap=false;
	return isLeap;
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int a, b, cnt;
	cin >> a >> b;
	for (int i=a;i<=b;i++){
		cnt += isLeapYear(i);
	}
	cout << cnt;
	return 0;
}
