#include <iostream>
#include <iomanip>
using namespace std;
    
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
    int n;
    while(cin>>n) cout<<fixed<<setprecision(3)<<(n-32)/1.8<<endl;
    return 0;
}
