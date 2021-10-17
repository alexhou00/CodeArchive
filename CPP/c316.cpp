#include <iostream>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, mx=0, curr[2] = {0};
	cin >> n;
	int points[n][2];
	int arr[n][n];
	for (int i=0;i<n;i++){
		cin >> points[i][0] >> points[i][1];		
	}
	for (int i=0;i<n;i++){
		for (int j=0;j<=i;j++){
			arr[i][j] = (points[i][0]-points[j][0])*(points[i][0]-points[j][0]) + (points[i][1]-points[j][1])*(points[i][1]-points[j][1]);
			arr[j][i] = arr[i][j];
			if (mx<arr[i][j]){
				mx = arr[i][j];
				curr[0]=j;
				curr[1]=i;
			}
		}		
	}
	cout << curr[0] << ' ' << curr[1];
	return 0;
}
