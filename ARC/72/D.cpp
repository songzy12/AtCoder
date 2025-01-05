#include<iostream>
using namespace std;

long long X, Y;

int count(long long X) {
    int i = 1;
    int ans = 0;
    X >>= 1;
    while (X) {
        if (X & 1) 
            ans += i % 1;
        X >>= 1;
        i++;
    }
    return ans % 2;   
}

bool win() {
    // whether Alice will win
    return (count(X) + count(Y)) % 2;
}

int main() {
    cin>>X>>Y;
    cout<<(win()?"Alice":"Brown")<<endl;
    return 0;
}