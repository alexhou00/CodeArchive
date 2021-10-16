#include <iostream>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	string str;
	while (cin >> str){
		int odds = 0;
		int counts[26] = {0};
		bool canBePalindrome = true;
		for (int i=0;i<str.size();i++){
			if (str[i]>'Z') str[i] = str[i]+'A'-'a';
			if (str[i]>'Z'||str[i]<'A') continue;
			counts[str[i]-'A']++;
		}
		for (int j=0;j<26;j++){
			if (counts[j]&1) odds++;
			if (odds>=2) {
				canBePalindrome=false;
				break;
			}
		}
		cout <<(canBePalindrome?"yes !\n":"no...\n");
	}
	return 0;
}
