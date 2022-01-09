#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n;
	int n, scores[20];
	for (int i=0;i<n;i++){
		cin >> scores[i];
	}
	sort(scores, scores+n);
	for (int i=0;i<n;i++){
		cout << scores[i] << ' ';
	}
	cout << '\n';
	if (scores[0]>=60){
		cout << "best case\n";
	}
	else{
		for (int i=n-1;i>=0;i--){
			if (scores[i]<60){
				cout << scores[i] << '\n';
				break;
			}
		}
	}
	if (scores[n-1]<60){
		cout << "worst case\n";
	}
	else{
		for (int i=0;i<n;i++){
			if (scores[i]>=60){
				cout << scores[i] << '\n';
				break;
			}
		}
	}
}
