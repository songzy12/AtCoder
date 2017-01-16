#include <iostream>
#include <algorithm>

using namespace std;
long long X[100005];
int main() {
    long long N, A, B;
    cin>>N>>A>>B;
    for (int i = 0; i < N; ++i)
        cin>>X[i];
    long long res = 0;
    for (int i = 0; i < N-1; ++i)
        res += min(B, A*(X[i+1]-X[i]));
    cout<<res<<endl;
    return 0;
}
