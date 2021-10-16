#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, m, tmp;
	cin >> n >> m;
	vector< vector<int> > v;
	for (int i=0;i<n;i++){
		v.push_back({});
		for (int j=0;j<m;j++){
			cin >> tmp;
			v[i].push_back(tmp);
		}
	}
	sort(v.begin(), v.end());
	for (int i=0;i<n;i++){
		for (int j=0;j<m;j++){
			cout << v[i][j] << ' '; 
		}
		cout << '\n';
	}
	return 0;
}

