#include <iostream>
#include <map>
#include <utility>
#include <vector>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, a;
	float b;
	cin >> n;
	map<float, int> m;
	for (int i=0;i<n;i++){
		cin >> a >> b;
		m.insert(pair<float, int>(b, a));
	}
	
	int groups = ((n%1==0) ? (n/8) : (n/8+1));
	vector< vector<int> > v;
	v.assign(groups, {});

	int x=-1;
	bool isForward = true;
	for (auto iter=m.begin(); iter!=m.end(); iter++){
		if (isForward) x++;
		else x--;
		if (x>groups-1){
			isForward = false;
			x--;
		}
		else if (x<0) {
			isForward = true;
			x++;
		}
		v[x].push_back((*iter).second);
	}
	
	int arr[groups][8];
	for (int j=0;j<groups;j++){
		cout << j+1 << ' ';
		for (int i=0;i>-8;i--){
			int idx = ((i%2) ? (4-((i-1)/2)) : (4+((i-1)/2)));
			arr[j][idx-1] = v[j][0-i];
		}
		for (int i=0;i<8;i++){
			cout << arr[j][i] << ' ';
		}
		cout << '\n';
	}
	return 0;
}
