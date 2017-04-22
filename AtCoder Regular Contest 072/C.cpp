#include<iostream>
#include<cstring>
using namespace std;

const int maxn = 100000;
long long a[maxn+5];
long long prefix[maxn+5];
int n;

long long compute(int f) {
    long long ans = 0;
    long long offset = 0;
    for (int i = 1; i <= n; ++i) {
        long long temp = prefix[i] + offset;
        if (f == 1) {
            if (i % 2 == 1 && temp <= 0) {
                ans += 1 - temp;
                offset += 1 - temp;
            } else if (i % 2 == 0 && temp >= 0) {
                ans += temp + 1;
                offset -= temp + 1;
            }
        } else {
            if (i % 2 == 0 && temp <= 0) {
                ans += 1 - temp;
                offset += 1 - temp;
            } else if (i % 2 == 1 && temp >= 0) {
                ans += temp + 1;
                offset -= temp + 1;
            }
        }
    }
    return ans;    
}

int main() {
    cin>>n;
    memset(prefix, 0, sizeof prefix);
    for (int i = 0; i < n; ++i) {
        cin>>a[i];
        prefix[i+1] = prefix[i] + a[i];
    }
    cout<<min(compute(1), compute(-1))<<endl;
    return 0;
}