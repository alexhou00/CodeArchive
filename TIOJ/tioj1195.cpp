#include <iostream>
#include <string>
using namespace std;

int main(){
	int n, total=0;
	string pltnum;
	cin >> n;
	for (int i=0;i<n;i++){
		cin >> pltnum;
		string pattern = pltnum.substr(2, 4);
		if ((pattern[0] == pattern[1]) && pattern[1] == pattern[2] && pattern[2]== pattern[3]){
			total += 2000;
		}
		else if ((pattern[0] == pattern[1]) && (pattern[2] == pattern[3])){
			total += 1500;
		}
		else{
			total += 1000;
		}
		
	}
	cout << total;
	return 0;
}
