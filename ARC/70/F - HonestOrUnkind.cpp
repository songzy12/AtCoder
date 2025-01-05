// if B >= A, then its clearly impossible
// since unkind can just reverse the real answer

// if a say b is unkind, then at least one of them is unkind.
// so we ignore the pair a, b

#include <cstdio>
#include <vector>
 
using namespace std;
 
char s[2];
char ans[4001];
 
int main() {
    int a, b, n, i;
    vector <int> v;
    
    scanf("%d %d", &a, &b);
    
    if (a <= b) {
        puts("Impossible");
        
        return 0;
    }
    
    n = a + b;
    
    for (i = 0; i < n; i++) {
        if (v.size() == 0) {
            v.push_back(i);
        } else {
            printf("? %d %d\n", i, v.back());
            fflush(stdout);
            
            scanf("%s", s);
            
            if (s[0] == 'Y') {
                v.push_back(i);
            } else {
                v.pop_back();
            }
        }
    }
    
    for (i = 0; i < n; i++) {
        printf("? %d %d\n", v[0], i);
        fflush(stdout);
        
        scanf("%s", s);
        
        if (s[0] == 'Y') {
            ans[i] = '1';
        } else {
            ans[i] = '0';
        }
    }
    
    printf("! %s\n", ans);
    
    return 0;
}