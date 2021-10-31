#include <iostream>
#include <vector>
using namespace std;
const int MAXN = 46341;
bool a[MAXN+1];
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    vector <int> v;
    for (int j=2;j<MAXN+1;j++) a[j] = 1;
    for (int j=2;j<MAXN+1;j++){
        if (a[j]){
            v.push_back(j);
            for (int i=j*j;i<MAXN+1;i+=j){
                a[i] = false;
            }
        }
    }
    while (cin >> n){
        if (n > 46341){
            bool flag = true;
            for (int i:v){
                if (n%i == 0){
                    flag = false;
                    cout << "獶借计\n";
                    break;
                }
            }
            if (flag) cout << "借计\n";
        }
		else{
            if (!a[n]) cout << "獶借计\n";
            else cout << "借计\n";
        }
    }
    return 0;
}
