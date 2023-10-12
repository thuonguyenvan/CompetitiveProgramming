#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10;
#define int long long
#define ll long long
const int mod=1e9+7;
int n, a[N], b[64][7], dp[N][64];
void solve(){
    int k,cntk=0; cin>>n>>k;
    for (int i=1; i<=n; i++) {
        cin>>a[i];
    }
    for (int i=1; i<=n; i++){
        for (int j=0; j<64; j++){
            dp[i][j]+=dp[i-1][j];
            dp[i][j]%=mod;
            dp[i][j&a[i]]+=dp[i-1][j];
            dp[i][j&a[i]]%=mod;
        }
        dp[i][a[i]]+=1;
        dp[i][a[i]]%=mod;
    }
    int res=0;
    for (int i=0; i<64; i++){
        //cout<<dp[n][i]<<' ';
        int s=0;
        for (int j=0;j<7; j++){
            s+=b[i][j];
        }
        if (s!=k) continue;
        res+=dp[n][i];
    }
    cout<<res%mod<<endl;
    for (int i=0; i<=n; i++){
        a[i]=0;
        for (int j=0; j<64; j++) dp[i][j]=0;
    }
    
}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    for (int i=0; i<=63; i++) {
        int t=i,d=0;
        while (t){
            b[i][++d]=t%2;
            t/=2;
        }
    }
    int tc=1; 
    cin>>tc;
    while (tc--) solve();
    return 0;
}
