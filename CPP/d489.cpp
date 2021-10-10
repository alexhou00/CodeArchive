#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int a, b, c;
	double s; //USE DOUBLE!!!!!!
	cin >> a >> b >> c;
	s = (a+b+c)/2;
	cout <<fixed<<setprecision(0)<< s*(s-a)*(s-b)*(s-c);
	return 0;
}
