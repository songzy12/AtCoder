#include<iostream>
using namespace std;

const int maxh = 100;
const int maxw = 100;

int h, w;
int cnt[26];
int mod[4];
string matrix[maxh];

bool check() {
    for (int i = 0; i < h; ++i)
        for (int j = 0; j < w; ++j)
            cnt[matrix[i][j]-'a'] ++;
    for (int i = 0; i < 26; ++i) {
       mod[cnt[i] % 4] ++; 
    }
    if (h % 2 == 0 && w % 2 == 0) {
        return mod[1] + mod[2] + mod[3] == 0;
    } else if (h % 2 == 1 && w % 2 == 1) {
        if (mod[1] + mod[3] != 1)
            return false;
        if (mod[3] == 1) {
            mod[2] ++;
        } 
        return mod[2] <= h / 2 + w / 2;
    } else {
        if (mod[1] + mod[3] != 0)
            return false;
        if (h % 2)
            return mod[2] <= w / 2;
        else 
            return mod[2] <= h / 2;
    }
}

int main() {
    cin>>h>>w;
    for (int i = 0; i < h; ++i)
        cin>>matrix[i];
    cout<<(check()?"Yes":"No")<<endl;
    return 0;
}