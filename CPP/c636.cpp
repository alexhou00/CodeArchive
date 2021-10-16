#include <iostream>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	string animals[12] = {"¹«","¤û","ªê","¨ß","Às","³D","°¨","¦Ï","µU","Âû","ª¯","½Þ"};
	int n;
	
	while(cin >> n){
		if (n>0)cout << animals[(12+(n%12)%12+11)%12]<<'\n';
		else cout << animals[(12+(n%12))%12] <<'\n';
	}
	return 0;
}
