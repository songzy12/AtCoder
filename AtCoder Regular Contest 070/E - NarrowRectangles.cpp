#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<pair<int, int> > p;

int main() {
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    
    int N;
    cin>>N;
    for (int i = 0; i < N; ++i) {
        int l, r;
        cin>>l>>r;
        p.push_back({l,0}); // 0 for left, 1 for right
        p.push_back({r,1});
    }
    sort(p.begin(), p.end());
    int cl = N;
    int cr = 0;
    int i;
    for (i = 0; i < 2*N; ++i) {
        if (p[i].second == 0) // if it is left
            cl --;
        else
            cr ++;
        if (cl == cr) {
            break;
        }
    }
    long long ans = 0;
    for (int j = 0; j < 2*N; ++j) {
        if (j <= i && p[j].second == 1)
            ans += p[i].first - p[j].first;
        if (j > i && p[j].second == 0)
            ans += p[j].first - p[i].first;
    }
    cout<<ans<<endl;
    return 0;
}

// sort the left edges, find the rightmost
// sort the right edges, find the leftmost

// wrong to do sort, since it is related to height