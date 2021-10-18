#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	while (cin >> n){
		vector<int> v;
		for (int i=n;i>=1;i--){
			v.push_back(i);
		}
		do{
			for (int i=0;i<n;i++){
				cout << v[i];
			}
			cout << '\n';
		}while (prev_permutation(v.begin(), v.end()));
	}
	return 0;
}
