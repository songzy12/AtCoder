#include<iostream>
#include<map>
#include<vector>

using namespace std;

const int maxm = 200000;
map<int, vector<int> > service;

bool valid(int n) {    
    for (int i = 0; i < service[1].size(); ++i) {
        int temp = service[1][i];
        for (int j = 0; j < service[temp].size(); ++j) {
            if (service[temp][j] == n)
                return true;
        }
    }
    return false;
}

int main() {
    int N, M;
    cin>>N>>M;
    for (int i = 0; i < M; ++i) {
        int a, b;
        cin>>a>>b;
        service[a].push_back(b);
    }
    cout<<(valid(N)?"POSSIBLE":"IMPOSSIBLE")<<endl;
}