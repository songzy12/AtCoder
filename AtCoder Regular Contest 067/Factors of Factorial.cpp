#include <iostream>
#include <cmath>

using namespace std;

bool isPrime[1001];

void isPrime_(int t) {
    for (int i = 2; i < sqrt(t); ++i) {
        if (t % i == 0) {
            isPrime[t] = false;
            return;
        }
    }
    isPrime[t] = true;
    return;
}

void checkPrime() {
    for (int i = 2; i < 1001; ++i) 
        isPrime_(i);
}

const int mod = 1e9+7;

int main() {
    int N;
    cin>>N;
    int count[1001][1001] = {0};
    checkPrime();
    for (int i = 2; i <= N; ++i) {
        int temp = i;
        for (int j = 2; j <= i; ++j) {
            if (temp == 1)
                break;
            if (isPrime[j]) {
                while (temp % j == 0) {
                    temp /= j;
                    count[i][j] += 1;
                }
            }
        }
    }
    int count_[1001] = {0};
    for (int i = 2; i <= N; ++i) {
        for (int j = 2; j <= N; ++j) {
            count_[i] += count[j][i];
        }
    }
    long long ans = 1;
    for (int i = 2; i <= N; ++i) {
        ans *= count_[i] + 1;
        ans %= mod;
    }
    cout<<ans<<endl;
    return 0;
}
