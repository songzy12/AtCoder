#include<iostream>
using namespace std;

const int maxh = 500;
const int maxw = 500;

int h, w, d;
    
string color = "RYGB";

void solve() {
    if (d % 2 == 1) {
        for (int i = 0; i < h; ++i) {
            for (int j = 0; j < w; ++j)
                cout<<color[(i + j) % 4];
            cout<<endl;
        }
        cout<<endl;
    } else if (d % 4 == 2) {
        for (int i = 0; i < h; ++i) {
            for (int j = 0; j < w; ++j)
                if (i % 4 < 2)
                    cout<<color[j % 4];
                else
                    cout<<color[(j + 2) % 4];
            cout<<endl;
        }
    } else {
        
    }
}    
    
int main() {
    cin>>h>>w>>d;
    solve();
    return 0;
}

// 曼哈顿距离
// 切比雪夫距离