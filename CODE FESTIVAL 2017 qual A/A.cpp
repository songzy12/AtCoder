#include<iostream>
using namespace std;

bool check(string s) {
    if (s.size() < 4)
        return false;
    string t = "YAKI";
    for (int i = 0; i < 4; ++i)
        if (s[i] != t[i])
            return false;
    return true;
}

int main() {
    string s;
    cin>>s;
    cout<<(check(s)?"Yes":"No")<<endl;
}