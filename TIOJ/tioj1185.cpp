#include <iostream>
#include <algorithm>
#include <initializer_list>
using namespace std;

int main(){
	long long a, b, c, mx;
	while (cin >> a >> b >> c){
		mx = max({a,b,c});
		if (a+b+c-mx > mx){
			cout << "SAFE" << "\n";
		}
		else{
			cout << "BYE" << "\n";
		}
	}
	return 0;
} 
