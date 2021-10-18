#include <iostream>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, sum=1;
	while (cin >> n){
		sum=1; 
		for (int k=1;k<n;k++){
			sum+=k;
		}
		cout << sum <<'\n';
	}
	return 0;
}
