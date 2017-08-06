#include<iostream>
using namespace std;

const int maxh = 100;
const int maxn = 100000;

int a[maxn];
int grid[maxh][maxh];

int main() {
    int h, w;
    cin>>h>>w;
    int n;
    cin>>n;
    int cur = 0;
    for (int i = 1; i <= n; ++i) {
        cin>>a[i];
    }
    for (int i = 1; i <= n; ++i) {
        while (a[i]--) {
            int r = cur / w;
            int c = cur % w;
            if (r % 2 == 1)
                c = w - 1 - c;
            grid[r][c] = i;
            cur ++;            
        }
    }
    for (int i = 0; i < h; ++i) {
        for (int j = 0; j < w; ++j)
            cout<<grid[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}