#include <iostream>
using namespace std;

int main(){
	short t, n, m;
	cin >> t;
	for (int i=0;i<t;i++){
		cin >> n >> m;
		int arr[n*m];
		for (int j=0;j<n;j++){
			for (int k=0;k<m;k++){
				cin >> arr[j*n+k];
			}
		}
		{
			bool flag = true;
			for (int j=0;j<n*m;j++){
				if (arr[j] != arr[n*m-1-j]){
					flag = false;
					break;
				}
			}
			cout << ((flag)?"go forward\n":"keep defending\n");
		}
	}
	return 0;
}
