#include <iostream>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int r, c, m, a, b;
	int arr[10][10], tmp[10][10], actions[10];
	while (cin >> r >> c >> m){
		a = r-1;
		b = c-1;
		for (int i=0;i<r;i++){
			for (int j=0;j<c;j++){
				cin >> arr[i][j];
			}
		}
		for (int i=m-1;i>=0;i--){
			cin >> actions[i];
		}
		for (int i=0;i<m;i++){
			if (actions[i]==0){//spin
				for (int i=0;i<=a;i++){
					for (int j=0;j<=b;j++){
						tmp[b-j][i] = arr[i][j];
					}
				}
				a = a+b;
				b = a-b;
				a = a-b;
			}
			else{//reverse
				for (int i=0;i<=a;i++){
					for (int j=0;j<=b;j++){
						tmp[a-i][j] = arr[i][j];
					}
				}
			}
			for (int i=0;i<10;i++){
				for (int j=0;j<10;j++){
					arr[i][j] = tmp[i][j];
				}
			}
		}
		cout << a+1 << ' ' << b+1 << '\n';
		for (int i=0;i<=a;i++){
			for (int j=0;j<b;j++){
				cout << arr[i][j] << ' ';
			}
			cout << arr[i][b] << '\n';
		}
	}
	return 0;
}
