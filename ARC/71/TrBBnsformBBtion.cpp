// Replace ¡¯A¡¯ with ¡¯1¡¯ and ¡¯B¡¯ with ¡¯2¡¯. 
// We claim that we can convert a string s to another string t if and only if 
// the sum of digits of s and the sum of digits of t are equivalent in modulo 3

// the operations are revertable

#include<iostream>
using namespace std;

const int maxn = 1e5;
int pres[maxn+5];
int pret[maxn+5];

int main() {
    string s, t;
    cin>>s>>t;
    pres[0] = pret[0] = 0;
    for (int i = 0; i < s.size(); ++i)
        pres[i+1] = (pres[i] + s[i] - 'A' + 1) % 3;
    for (int i = 0; i < t.size(); ++i)
        pret[i+1] = (pret[i] + t[i] - 'A' + 1) % 3;
    
    int q;
    cin>>q;
    
    while (q--) {
        int a, b, c, d;
        cin>>a>>b>>c>>d;
        int temp1 = (pres[b]-pres[a-1]+3)%3;
        int temp2 = (pret[d]-pret[c-1]+3)%3;
        cout<<(temp1 == temp2 ? "YES" : "NO")<<endl;
    }
}