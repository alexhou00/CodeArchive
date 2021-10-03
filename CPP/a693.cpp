#include <iostream>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
    int n, m;
    while (cin >> n >> m)
    {
        int *array = new int[n];
        int *sum = new int[n + 1];
        int total = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> array[i];
            sum[i] = total;
            total = total + array[i];
        }
        sum[n] = total;

        int right, left;
        for (int i = 0; i < m; i++)
        {
            cin >> left >> right;
            int ans = sum[right] - sum[left - 1];
            cout << ans << endl;
        }
    }
    return 0;
}
