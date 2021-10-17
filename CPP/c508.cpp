#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	int arr[n];
	for (int i=0;i<n;i++){
		cin >> arr[i];
	}
	sort(arr, arr+n);
	for (int i : arr) cout << i << ' ';
	cout << '\n';
	set<int> s;
	for (int i : arr) s.insert(i);
	for (auto it=s.rbegin();it!=s.rend();it++)  cout << *it << ' ';
	return 0;
}
