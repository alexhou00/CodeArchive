#include <iostream>
#include <sstream>
#include <algorithm>
#include <set>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t, d;
	string line;
	// input
	cin >> t;
	cin.ignore();
	for (int j=0;j<t;j++){
		
		int i=0, arr[100]={0};
		getline(cin, line);
		stringstream ss;
		ss<<line;
		while (ss>>arr[i]){
			++i;
		}
		// find d
		for (int x : arr){
			if (x==0) break;
			if (count(arr, arr+i, x)>1){
				d = x;
				break;
			}
		}
		// find m
		set<int> s;
		for (int x : arr){
			if (x!=0) s.insert(x);
		}
		int mx = 0, mn=arr[0], sum=0, m;
		for (auto it=s.begin();it!=s.end();it++){
			if (mn>*it) mn=*it;
			if (mx<*it) mx=*it;
			sum+=*it;
		}
	    m = (mn+mx)*(s.size()+1)/2-sum;
	    cout << m << ' ' << d << '\n';
	}
	return 0;
}
