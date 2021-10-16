#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	string names, greeting, substring;
	vector<int> v;
	getline(cin,names);
	v.push_back(-1);
	for (int i=0;i<names.size();i++){
		if (names[i]==' ') v.push_back(i);
	}
	v.push_back(names.size());
	getline(cin, greeting);
	for (int i=1;i<v.size();i++){
		substring = names.substr(v[i-1]+1, v[i]-v[i-1]);
		if (substring[substring.size()-1]==' ') substring = substring.substr(0, substring.size()-1);
		cout << greeting << ", " << substring << '\n';
	}
	return 0;
} 
/* 
#include <iostream>
#include <sstream>
using namespace std;

int main()
{
string A,B;
getline(cin, A);
getline(cin, B);
stringstream ss;
ss << A;
while (ss >> A)
cout<<B<<", "<<A<<endl;
return 0;
}*/ 
