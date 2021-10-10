#include <iostream>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, continuous=0, kills=0, deaths=0, assists=0;
	string cmd;
	cin >> n;
	for (int i=0;i<n;i++){
		cin >> cmd;
		if (cmd=="Get_Kill"){
			kills++;
			continuous++;
			if (continuous<3) cout << "You have slain an enemie.\n";
			else if (continuous==3) cout << "KILLING SPREE!\n";
			else if (continuous==4) cout << "RAMPAGE~\n";
			else if (continuous==5) cout << "UNSTOPPABLE!\n";
			else if (continuous==6) cout << "DOMINATING!\n";
			else if (continuous==7) cout << "GUALIKE!\n";
			else if (continuous>=8) cout << "LEGENDARY!\n";
		}
		else if (cmd=="Die"){
			deaths++;
			if (continuous<3) cout << "You have been slained.\n";
			else cout << "SHUTDOWN.\n";
			continuous = 0;
		}
		else if (cmd=="Get_Assist"){
			assists++;
		}
	}
	cout << kills << '/' << deaths << '/' << assists;
	return 0;
}

