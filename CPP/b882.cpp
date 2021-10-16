#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	long long h, m, s, t;
	cin >> h >> m >> s;
	h %= 24;
	t = 3600*h+60*m+s;
	h = (t/3600)%24;
	m = t%3600/60;
	s = t%60;
	cout.fill('0');
	cout <<setw(2)<< h <<':'
	 	<<setw(2)<< m <<':'
	   	<<setw(2)<< s; 
	return 0;
}
