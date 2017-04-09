#include<iostream>
#include<algorithm>

using namespace std;

const int maxn = 100000;
long long x[maxn+5], y[maxn+5];
const int p = 1e9+7;

long long mult(long long x, long long y) {
    return (x*y)%p;
}

long long add(long long x, long long y) {
    return (x+y)%p;
}

int main() {
    int n, m;
    cin>>n>>m;
    for (int i = 0; i < n; ++i)
        cin>>x[i];
    for (int i = 0; i < m; ++i)
        cin>>y[i];
    sort(x, x+n);
    sort(y, y+m);
    
    /*for (int i = 0; i < n-1; ++i) {
        for (int j = 0; j < m-1; ++j) {
            long long count = (i+1)*(n-1-i)*(j+1)*(m-1-j) % p;
            long long area = (x[i+1]-x[i])*(y[j+1]-y[j])%p;
            ans = (ans + area*count)%p;
        }
    }*/
    long long ans_x = 0;
    for (int i = 0; i < n-1; ++i)
        ans_x = add(ans_x, mult(mult(i+1, n-1-i), x[i+1]-x[i]));
    long long ans_y = 0;
    for (int i = 0; i < m-1; ++i)
        ans_y = add(ans_y, mult(mult(i+1, m-1-i), y[i+1]-y[i]));
    
    cout<<mult(ans_x,ans_y)<<endl;
    return 0;
}