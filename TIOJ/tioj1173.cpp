#include <iostream>
using namespace std;

int main(){
	int a, b, c;
	cin >> a >> b >> c;
	bool isArithmetic = false;
	bool isGeometric = false;
	if ((a-b)==(b-c)){
		isArithmetic = true;
	}
	if ((a/(float)b)==(b/(float)c)){
		isGeometric = true;
	}
	if (isArithmetic==true && isGeometric==true){
		cout << "both"; 
	}
	else if(isArithmetic==true && isGeometric==false){
		cout << "arithmetic";
	}
	else if(isArithmetic==false && isGeometric==true){
		cout << "geometric"; 
	}
	else {
		cout << "normal";
	} 
	return 0;
} 
