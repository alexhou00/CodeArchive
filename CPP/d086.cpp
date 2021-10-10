#include <iostream>
#include <string>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	string str;
	int sum=0;
	bool hasStrangeSymbols;
	while (cin >> str){
		sum = 0;
		hasStrangeSymbols = false;
		if (str=="0") break;
		for (int i=0;i<str.size();i++){
			if ((str[i]<'a' && str[i]>'Z')||(str[i]<'A')||(str[i]>'z')){
				cout << "Fail\n";
				hasStrangeSymbols = true;
				break;
			}
			if (str[i]<'a'){
				str[i] = str[i]+'a'-'A';
			}
			sum += str[i]-'a'+1;
		}
		if(!hasStrangeSymbols)cout<< sum<<"\n";
	}
	return 0;
}
