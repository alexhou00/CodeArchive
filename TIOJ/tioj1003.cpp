#include <iostream>
using namespace std;

int total = 1;

int f(int num){
	total += num;
	if (num == 1){
		return total;
	}
	else{
		return f(num-1);
	}
}

int main(){
	int n;
	cin >> n;
	cout << f(n);
	return 0;
}
