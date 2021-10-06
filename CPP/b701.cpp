#include <iostream>
#include <vector> 
using namespace std;

vector< vector<int> > v;
int w=0, n=0, e=0, s=0, a=0;

int search(int i, int j){// (y,x)
	if (v[i][j]==1){
		v[i][j] = 0;
		a=a+1;
		w = min(w, j), n = min(n, i), e = max(e, j), s = max(s, i);
		if (i<v.size()){
			search(i+1, j);	
		}
		if (i>0){
			search(i-1, j);
		}
		if (j>0){
			search(i, j-1);
		}
		if (j<v[0].size()){
			search(i, j+1);
		}
	}
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int x, y, g;
	cin >> x >> y;
	for (int i=0;i<y;i++){
		v.push_back({});
		for (int j=0;j<x;j++){
			cin >> g;
			v[i].push_back(g);
		}
	}
	for (int i=0;i<y;i++){
		for (int j=0;j<x;j++){
			if (v[i][j]==1){
				w=j, n=i, e=j, s=i, a=0;
				search(i, j);
				cout << w << ' ' << n << ' ' << e << ' ' << s << ' ' << a << " \n" ;
			}
		}
	}
	//cout << cnt;
	return 0;
} 
