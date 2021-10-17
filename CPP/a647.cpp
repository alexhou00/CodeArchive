#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	for (int i=0;i<n;i++){
		int m, p;
		float x;
		cin >> m >> p;
		x = round((float)(p-m)*10000/m)/100;
		cout << fixed << setprecision(2) << setw(6) << x << "% ";
		cout << ((((p-m)*100>=10*m) || ((p-m)*100<=-7*m))?"dispose\n":"keep\n");
	}
	return 0;
}
