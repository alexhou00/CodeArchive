#include <iostream>
#include <cmath>
using namespace std;

int isThree(int num){
	int flag=0;
	int arr[2] = {0};
	while (num) {
		flag = 1 - flag;
		arr[flag] += (num & 1);
		num>>=1;
	}
	return abs(arr[0]-arr[1]);
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, a;
	while(cin >> n){
		do{
			a = (isThree(n));
		} while (a>=30);
		while(a>=3){
			a-=3;
		}
		cout << (a ? "NO\n" : "YES\n");
	}	
	return 0;
} 
