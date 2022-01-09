#include <iostream>
#include <utility>
#include <algorithm>
#include <vector>
using namespace std;
#define pii pair<int, int>

bool cmp(pii a, pii b){
	if (a.first==b.first){
		return a.second>b.second;
	}
	else return a.first<b.first;
}

int main(){
	int n, l, r;
	vector<pii> v;
	cin >> n;
	for (int i=0;i<n;i++){
		cin >> l >> r;
		v.push_back({l, r});
	}
	sort(v.begin(), v.end(), cmp);
	int beg=0, fin=0, ans=0;
	for (int i=0;i<v.size();i++){
		if (v[i].first>=fin){
			ans += (fin-beg);
			beg = v[i].first;
			fin = v[i].second;
		}
		else if (v[i].second>=fin){
			fin = v[i].second;
		}
	}
	ans += (fin-beg);
	cout << ans << '\n';
	return 0;
}
