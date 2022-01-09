#include <iostream>
#include <vector>
#define p 1000000007
#define vvi vector< vector<long long> >
using namespace std;

vvi mult(vvi A, vvi B){
    vvi C= {{0,0,0},
            {0,0,0},
            {0,0,0}};
    for (long long i=0;i<3;i++){
        for (long long j=0;j<3;j++){
            for (long long k=0;k<3;k++){
                C[i][j] += ((A[i][k]%p)*(B[k][j]%p))%p;
            }
            C[i][j] %= p;
        }
    }
    return C;
}

vvi powM(long long n){
    vvi M= {{0,0,1},
            {1,0,0},
            {0,1,1}};
    if (n==1) return M;
    if (!(n&1)){//n%2==0
        vvi powMk = powM(n/2);
        return mult(powMk, powMk);
    }
    else{
        vvi powMk = powM(n/2);
        return mult(mult(M, powMk), powMk);
    }
}

long long fib(long long n){
    if (n<=2) return 1;
    if (n==3) return 2;
    else{
        vvi A = powM(n);
        return A[2][2]%p;
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long n, m, rests[100005] = {0};
    long long ans=1;
    cin >> n >> m;
    for (long long i=1;i<=m;i++){
        cin >> rests[i];
        ans *= (fib(rests[i]-rests[i-1])%p);
        ans %= p;
    }
    ans *= ((fib((n-rests[m])))%p); //
    cout << (ans%p);
    return 0;
}
