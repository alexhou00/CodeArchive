#include <iostream>
#include <vector>
using namespace std;

vector<int> adj[100001];
int len[100001] = {};

int dfs(int now, int prev){
	for (int i : adj[now]){
		if (i!=prev){
			len[i] = len[now]+1;
			dfs(i, now);
		}
	}
	return 0;
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, a, b;
	while (cin >> n){
		for (int i=0;i<n;i++){
			adj[i].clear();
			len[i]=0;
		}
		for (int i=1;i<n;i++){
			cin >> a >> b;
			adj[b].push_back(a);
			adj[a].push_back(b);
		}
		dfs(0, -1);
		int idx=0, mx=0;
		for (int i=0;i<n;i++){
			if (len[i] > mx){
				mx = len[i];
				idx = i;
			}
		}
		for (int i=0;i<n;i++) len[i]=0;
		dfs(idx, -1);
		for (int i=0;i<n;i++){
			if(len[i]>mx){
				mx = len[i];
			}
		}
		cout << mx << '\n';
	}
	return 0;
}
