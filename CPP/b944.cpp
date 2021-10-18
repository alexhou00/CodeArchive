#include <iostream>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, a, b;
	cin >> n;
	int urinals[n+2][2] = {0};
	while (cin >> a >> b){
		int x = 0;
		bool isFull = true;
		for (int i=1;i<=n;i++){
			if (urinals[i-1][0]==0&&urinals[i][0]==0&&urinals[i+1][0]==0){
				x = i;
				isFull = false;
				break;
			}
		}
		if (isFull){
			for (int i=1;i<=n;i++){
				if (urinals[i][0]==0){
					x = i;
					isFull = false;
					break;
				}
			}
		}
		if (!isFull) urinals[x][0] = a, urinals[x][1] = b;
		else cout << "  Not enough\n";
		cout << "Number: ";
		for (int j=1;j<=n;j++) cout << urinals[j][0] << ' ';
		cout << "\n  Time: ";
		for (int j=1;j<=n;j++) cout << urinals[j][1] << ' ';
		cout << "\n\n";
		for (int j=1;j<=n;j++){
			if (urinals[j][1]!=0) urinals[j][1]--;
			if (urinals[j][1]==0) urinals[j][0] = 0;
		}
	}
	return 0;
}
