#include <iostream>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	string animals[12] = {"鼠","牛","虎","兔","龍","蛇","馬","羊","猴","雞","狗","豬"};
	int n;

	while(cin >> n){
		if (n>0)cout << animals[(12+(n%12)%12+11)%12]<<'\n';
		else cout << animals[(12+(n%12))%12] <<'\n';
	}
	return 0;
}
