#include <bits/stdc++.h>
using namespace std;
 
#define REP(i,n) for(ll i=0; i<(ll)(n); i++)
#define FOR(i,n,m) for (ll i=n; i<(ll)(m); i++)
#define pb push_back
#define INF 1000000007LL
#define all(a) (a).begin(),(a).end()
 
typedef long long ll;
typedef pair<int,int> p;
 
int dy[4]={-1,1,0,0};
int dx[4]={0,0,1,-1};
 
struct UnionFind{
    vector<int> parents;
    vector<int> rank;
    UnionFind(int n){
        parents.resize(n);
        rank.assign(n, 1);
        REP(i, n){
            parents[i] = i;
        }
    }
    int find(int x){
        if(parents[x] == x) return x;
        return parents[x] = find(parents[x]);
    }
    
    int unite(int x, int y){
        x = find(x);
        y = find(y); // not x, y themselves, but their father
        if(x == y) return -1;
        if(rank[x] > rank[y]) parents[y] = x;
        else{
            parents[x] = y;
            if(rank[x]==rank[y]) rank[y]++; // use of rank to reduce merge
        }
        return 0;
    }
    
    bool same(int x, int y){
        return find(x) == find(y);
    }
};
 
int N,K,L;
unordered_map<int, unordered_map<int, int> > cnt;
int main(){
    ios::sync_with_stdio(false);
    cin >> N >> K >> L;
    UnionFind uf1(N);
    UnionFind uf2(N);
    REP(i,K){
        int p,q;
        cin >> p >> q;
        p--;q--;
        uf1.unite(p,q);
    }
    REP(i,L) {
        int r,s;
        cin >> r >> s;
        r--;s--;
        uf2.unite(r,s);
    }
    REP(i,N) cnt[uf1.find(i)][uf2.find(i)]++;
    REP(i,N-1) cout << cnt[uf1.find(i)][uf2.find(i)] << " ";
    cout << cnt[uf1.find(N-1)][uf2.find(N-1)] << endl;
    return 0;
}
