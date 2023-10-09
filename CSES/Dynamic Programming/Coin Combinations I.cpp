#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ll long long
#pragma GCC optimize("O3,expensive-optimizations,Ofast,unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
const int N=2e6+10;
const int mod=1e9+7;
const int MAX=1e18;
clock_t startTime;
double getCurrentTime() {
	return (double)(clock() - startTime) / CLOCKS_PER_SEC;
}
int n, m, a[N], dp[N];
/*
dp[m]=dp[i]+dp[i-x]
*/
void solve(){
    cin>>n>>m;
    for (int i=1; i<=n; i++) {
        cin>>a[i];
        dp[a[i]]=1;
    }
    for (int i=1; i<=m; i++){
        //cout<<dp[1]<<endl;
        for (int j=1; j<=n; j++){
            if (i>=a[j]) {
                //if (i==5) cout<<dp[i]<<' '<<dp[i-a[j]]<<' '<<dp[a[j]]<<endl;
                dp[i]=dp[i]+dp[i-a[j]];
                dp[i]%=mod;
            }
        }
       // cout<<i<<' '<<dp[i]<<endl;
    }
    cout<<dp[m];
 
}
 
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);
    int tc=1; 
    //cin>>tc;
    while (tc--) {
        solve();
        cout<<endl;
    }
    return 0;
}