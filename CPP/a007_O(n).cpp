#pragma GCC optimize("Ofast")
#include <iostream>
#include <vector>
using namespace std;
 
const int MAXN = 46341; //sqrt(2147483647)=46341
bool isPrime[MAXN+1];
vector<int> primes;

void getPrimes(){
	isPrime[0]=0;isPrime[1]=0;
	for(int i=2;i<=MAXN;i++) isPrime[i]=1;
	for(int i=2;i<=MAXN;i++){
        if(isPrime[i]) primes.push_back(i);
        for(auto p:primes){
            if(i*p>MAXN) break;
            isPrime[i*p]=0;
            if(i%p==0) break;
        }
    }
    /* 
	for(auto p:primes){
		cout << p << ' ';
	}
	*/
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	getPrimes();
	int n;
	while (cin >> n){
		if (n>MAXN){
			bool flag = true;
			for (int j:primes){
				if(n%j==0){
					flag = false;
					break;
				}
			}
			cout << (flag?"借计\n":"獶借计\n");
		}
		else cout << (isPrime[n]?"借计\n":"獶借计\n");
	}
	return 0;
}
