#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int n, m, sum;
    int digits = 0;
    int count = 0;
    cin >> n >> m;
    double num2;
    for (int num=n; num<=m; num++) {
        sum = 0;
        while (int(num/pow(10.0, digits))!=0) {
            digits += 1;
        }
        num2 = num;
        for (int i=0; i<digits; i++) {
            n = num2 / pow(10.0, i);
            sum += pow(n%10, digits);
        }
        if (sum==num) {
            count += 1;
            cout << num << " ";
        }

    }
    if (count == 0) {
        cout << "none";
    }
}
