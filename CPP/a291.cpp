#include <iostream>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int goal[4], n, input[4];
	while (cin>>goal[0]>>goal[1]>>goal[2]>>goal[3]){
		cin >> n;
		
		for (int j=0;j<n;j++){
			bool reachedA[4] = {}, reachedB[4] = {};
			int As=0, Bs=0;
			
			for (int i=0;i<4;i++){
				cin >> input[i];
				if (input[i] == goal[i]){//check A
					As++;
					reachedA[i] = 1;
				}
			}
			
			//check B
			for (int i=0;i<4;i++){
				if (reachedA[i]==0){
					for (int k=0;k<4;k++){
						if (i!=k && input[i] == goal[k] && reachedA[k]==0 && reachedB[k]==0){
							Bs++;
							reachedB[k] = 1;
							break;
						}
					}
				}
			}
			
			cout << As <<"A"<< Bs<<"B\n";
		}
		
	}
	return 0;
}
