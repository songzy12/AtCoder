#include<iostream>
#include<map>
#include<cstring>
using namespace std;

const int maxn = 1e6;
const int p = 1e9+7;
long long dp[maxn+5];
long long pre[maxn+5];

long long add(long long x, long long y) {
    return (x+y)%p;
}

long long n; // remember this!!!

int main() {
    cin>>n;
    dp[0] = 1;
    dp[1] = n;
    pre[0] = 1;
    pre[1] = n+1;
    long long n_n = (long long)(n-1)*(n-1)%p; // remember this!!!
    for (int m = 2; m <= n; ++m) {
        long long ans = dp[m-1];
        
        ans = add(ans, n_n);
        ans = add(ans, m-3 >= 0 ? pre[m-3] : 0);
        ans = add(ans, n+1-m);
        dp[m]=ans;
        pre[m] = add(pre[m-1], dp[m]);
    }
    cout<<dp[n]<<endl;
    return 0;
}