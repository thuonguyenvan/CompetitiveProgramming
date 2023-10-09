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
int n,m;
int a[N], dp[N];
 
void solve(){
    cin>>n>>m;
    for (int i=1; i<=m; i++) dp[i]=MAX;
    for (int i=1; i<=n; i++) {
        cin>>a[i];
        dp[a[i]]=1;
    }
    dp[0]=0;
    for (int i=1; i<=m; i++) {
        for (int j=1; j<=n; j++){
            if (i>a[j]) dp[i]=min(dp[i],dp[i-a[j]]+1);
        }
    }
    cout<<(dp[m]==MAX?-1:dp[m]);
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
