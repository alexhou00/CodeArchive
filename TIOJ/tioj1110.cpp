#include <iostream>
#include <algorithm>
#include <initializer_list>
using namespace std;

int main(){
	int n, k, mx;
	int lst[26] = {0};
	string str;
	cin >> n;
	for (int i=0;i<n;i++){
		int lst[26] = {0};
		cin >> k >> str;
		for (int j=0;j<k;j++){
			lst[int(str[j])-97] += 1;
		}
		mx = *max_element(lst, lst+26);
		for (int j=0;j<26;j++){
			if (lst[j]==mx){
				cout << char(j+97);
			}
		}
		cout << "\n";
	}
	return 0;
} 
