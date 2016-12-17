#include<stdio.h>
#include<math.h>
#include<algorithm>
#include<queue>
#include<string.h>
#include<vector>
#include<set>
using namespace std;
long long mod=1000000007;
char in[3100];
long long dp[3100][3100];
int r[3100];
int sum[3100];
int main(){
    int a,b;scanf("%d%d",&a,&b);
    scanf("%s",in);
    for(int i=0;i<a;i++)r[i]=i;
    for(int i=0;i<b;i++){
        int p,q;scanf("%d%d",&p,&q);
        p--;q--;
        r[p]=max(r[p],q); // by default l[p]=p, r[p]=p
    }
    for(int i=1;i<a;i++){
        r[i]=max(r[i],r[i-1]);
    }
    int cur=0;
    for(int i=0;i<a;i++){
        cur+=in[i]-'0';
        sum[i]=cur;
    }
    dp[0][0]=1;
    for(int i=0;i<a;i++){
        for(int j=0;j<=i;j++){
            if(!dp[i][j])
                continue;
            int t=sum[r[i]];
            if(j<=t&&t-j<=r[i]-i)
                dp[i+1][j]=(dp[i+1][j]+dp[i][j])%mod;
            if(j+1<=t&&t-j-1<=r[i]-i)
                dp[i+1][j+1]=(dp[i+1][j+1]+dp[i][j])%mod;
        }
    }
    printf("%lld\n",dp[a][sum[a-1]]);
}