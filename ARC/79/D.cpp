#include<iostream>

using namespace std;

// consider the inversion of the operation.
// let the final standing be 0, ..., N-1
// then for N rounds, it will be 1, ..., N
// for r rounds, it will be N-r+1, ..., N(index r-1), -r, ..., -r

const int N = 50;
long long a[N];

int main() {
    long long K;
    cin>>K;
    if (K == 0) {
        //cout<<1<<endl; // N \ge 2 must hold
        //cout<<0<<endl;
        //return 0;
    } 
        cout<<N<<endl;
        for (int i = 0; i < N; ++i)
            a[i] = i;
        long long q = K / N;
        int r = K % N;
        for (int i = 0; i < r; ++i) {
            a[i] += N - r + 1;            
        }
        for (int i = r; i < N; ++i) {
            a[i] -= r;
        }
        for (int i = 0; i < N; ++i) {
            cout<<a[i]+q<<" ";            
        }
        cout<<endl;
   
    return 0;
}