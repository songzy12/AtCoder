#include<iostream>
#include<cstdio>
#include<cmath>

using namespace std;

long long compute(long long n) {
    return n * (n+1) / 2;
}

int main() {
    long long X;
    cin>>X;
    // find n such that n(n+1)/2 \ge X
    // n^2 + n + 1/4 \ge 2X + 1/4
    // (n+1/2) \ge \sqrt{2X+1/4}
    // n \ge \sqrt{2X+1/4}-1/2
    long long n = sqrt(2*X+0.25) - 0.5;
    if (compute(n) >= X) {
        cout<<n<<endl;
    } else {
        cout<<n+1<<endl;
    }
    return 0;
}