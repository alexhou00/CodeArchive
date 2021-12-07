#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	long long int a, b, c, d, e, f;
	long long int y, p0n=0, prev;
	vector<long long int> v;
	cin >> a >> b >> c >> d >> e >> f;
	for (int x=-35;x<=35;x++){
		y = a*x*x*x*x*x+b*x*x*x*x+c*x*x*x+d*x*x+e*x+f;
		prev = p0n;
		p0n = ((y==0)?0:(abs(y)/y));
		if (p0n==0){
			v.push_back(x);
			v.push_back(x);
		}
		else if (prev!=p0n && prev!=0){
			v.push_back(x-1);
			v.push_back(x);
		}
		
	}
	if (v.size()>10) cout << "Too many... = =\"";
	else if (v.size()==0) cout << "N0THING! >\\\\\\<";
	else {
		for(int i=0;i<v.size();i++){
			cout << v[i] << ((i%2)?'\n':' ');
		}
	}
	return 0;
} 
