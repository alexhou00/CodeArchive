#include <iostream>
#include <string>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int t, n, cnt=0;
	string s;
	cin >> t;
	
	for (int i=0;i<t;i++){
		cnt=0;
		cin >> n >> s;
		for (int j=1;j<n-1;j++){
			if (s[j-1]=='.'){
				cnt++;
				s[j]='X';
				s[j-1]='X';
				s[j+1]='X';
			}
		}
		if(s[n-2]=='.'){
			cnt++;
			s[n-2]='X';
			s[n-1]='X';
			s[n-3]='X';
		}
		else if (s[n-1]=='.'){
			cnt++;
			s[n-2]='X';
			s[n-1]='X';
		}
		cout << "Case "<< (i+1) <<": " << cnt << '\n';
	}
	return 0;
}
