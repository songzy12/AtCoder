#include<iostream>
using namespace std;

bool judge(string S) {
    int i = 0;
    while (i < S.length()) {
        if (S[i] == 'd') {
            if (i + 5 >= S.length()) {
                return S.substr(i, 5).compare("dream") == 0;
            }
            else if (S[i + 5] == 'd') {
                if (S.substr(i, 5).compare("dream"))
                    return false;
                i += 5; continue;
            }
            else if (S[i + 5] == 'e') {
                if (S[i + 7] == 'a') {
                    if (S.substr(i, 5).compare("dream"))
                        return false;
                    i += 5; continue;
                } else {
                    if (S.substr(i, 7).compare("dreamer"))
                        return false;
                    i += 7; continue;
                }
            } else {
                return false;
            }
        } else if (S[i] == 'e') {
            if (i + 5 >= S.length()) {
                return S.substr(i, 5).compare("erase") == 0;
            }
            if (S[i + 5] == 'r') {
                if (S.substr(i, 6).compare("eraser"))
                    return false;
                i += 6; continue;
            } else {
                if (S.substr(i, 5).compare("erase"))
                    return false;
                i += 5; continue;
            }
        } else {
            return false;
        }
    }    
    return true;
}

// reverse the string, then greedy

int main() {
    string S;
    cin>>S;
    cout<<(judge(S)?"YES":"NO")<<endl;
}