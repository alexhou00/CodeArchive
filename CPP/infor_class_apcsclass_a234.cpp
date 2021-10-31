#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int n, m, mx;
	int num1[1000], num2[1000], num3[1001] = {};
	
	cin >> n;
	for (int i=0;i<n;i++) cin >> num1[i];
	cin >> m;
	for (int i=0;i<m;i++) cin >> num2[i];
	
	mx = max(n, m);	
	for (int i=1;i<=mx;i++){
		num3[i-1] += ((n-i<0)?0:num1[n-i])+((m-i<0)?0:num2[m-i]);
		if (num3[i-1]>9) num3[i]+=(num3[i-1]/10);num3[i-1]%=10;
	}
	for (int i=0;i<mx+1;i++){
		if (!(i==0 && num3[mx-i]==0)) cout << num3[mx-i];
	}
	return 0;
} 
