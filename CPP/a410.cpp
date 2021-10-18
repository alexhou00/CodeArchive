#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int a, b, c, d, e, f;
	cin >> a >> b >> c >> d >> e >> f;
	int delta, delta_x, delta_y;
	delta = a*e-b*d;
	delta_x = c*e-b*f;
	delta_y = a*f-c*d;
	if (delta!=0){
		cout << "x=" << fixed << setprecision(2) << (float)delta_x/delta << '\n';
		cout << "y=" << fixed << setprecision(2) << (float)delta_y/delta << '\n';	
	}
	else if (delta_x!=0 || delta_y!=0){
		cout << "No answer"; 
	}
	else{
		cout << "Too many";
	}
	return 0;
} 
