#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int cnt2 = 0, cnt4 = 0, cnt1 = 0;
    for (int i = 0; i < n; ++i) {
        int x;
        cin>>x;
        if (x % 4 == 0)
            cnt4 ++;
        else if (x % 2 == 0)
            cnt2 ++;
        else 
            cnt1 ++;
    }
    if (cnt4 >= cnt1)
        cout<<"Yes"<<endl;
    else if (cnt4 - cnt1 == -1 && cnt2 == 0)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
    return 0;
}