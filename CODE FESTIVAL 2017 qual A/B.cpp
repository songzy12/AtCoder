#include<iostream>
using namespace std;

bool check(int n, int m, int k) {
    
    for (int b = 0; b <= m; ++b) {
        int p = k - b * n;
        int q = m - 2 * b;
        
        //cout<<b<<" "<<p<<" "<<q<<endl;
        if (q == 0) {
            if (p == 0)
                return true;
            continue;
        }
        if (p % q == 0 && p / q <= n && p / q >= 0)
            return true;
    }
    return false;
}

int main() {
    int n, m, k;
    cin>>n>>m>>k;
    cout<<(check(n,m,k)?"Yes":"No")<<endl;
    return 0;
}