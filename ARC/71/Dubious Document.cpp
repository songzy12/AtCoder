#include<iostream>
#include<cstring>
using namespace std;

const int maxn = 50;
int count[maxn][26];

int main() {
    int n;
    cin>>n;
    memset(count, 0, sizeof count);
    for (int i = 0; i < n; ++i) {
        string temp;
        cin>>temp;
        for (int j = 0; j < temp.size(); ++j)
            count[i][temp[j]-'a']++;
    }
    /*for (int i = 0; i < n; ++i) {
        for (int j = 0; j < 26; ++j) {
            cout<<char('a'+j)<<" "<<count[i][j]<<" ";
        }
        cout<<endl;
    }*/
    string res = "";
    for (int i = 0; i < 26; ++i) {
        int temp = 50;
        for (int j = 0; j < n; ++j)
            temp = min(temp, count[j][i]);
        //cout<<char('a'+i)<<temp<<endl;
        for (int j = 0; j < temp; ++j)
            res += char('a'+i);
    }
    cout<<res<<endl;
}