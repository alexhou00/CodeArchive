#include <iostream>
#include <vector>
using namespace std;

vector<int> arr;

int f(int a, int b){
	if (b==1) return arr[a];
	else if (b==0) return a;
	else return f(arr[a], b-1);
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, q, tmp, a, b;
	cin >> n;
	arr.push_back(0);
	for (int i=0;i<n;i++){
		cin >> tmp;
		arr.push_back(tmp); 
	}
	cin >> q;
	for (int i=0;i<q;i++){
		cin >> a >> b;
		cout << f(a, b)<<'\n';
	}
	return 0;
} 
