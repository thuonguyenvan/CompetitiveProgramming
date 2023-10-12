#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ll long long
#define mem(a,n,v) for(int i=0; i<n; i++) a[i]=v
#pragma GCC optimize("O3,expensive-optimizations,Ofast,unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
const int N=2e6+10;
const int mod=1e9+7;
const int MAX=1e18;
clock_t startTime;
double getCurrentTime() {
	return (double)(clock() - startTime) / CLOCKS_PER_SEC;
} 
 
 
 
void solve(){
    ll n; cin>>n;
    ll cnt[n+2];
    mem(cnt,n+2,0);
 
    set<ll> kt;
 
    ll ans[n+2];
    mem(ans,n+2,0);
 
    for (int i=1; i<=n; i++){
        ll x; cin>>x;
        if (x>n) continue;
        cnt[x]++;
        kt.insert(x);
    }
    for (ll i: kt) {
        ll t=i;
        while (t<=n){
            ans[t]+=cnt[i];
            t+=i;
        }
    }
    ll res=-1;
    for (ll i: ans) res=max(res,i);
    cout<<res<<endl;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
    int tc=1; 
    cin>>tc;
    while (tc--) {
        solve();
        cout<<endl;
    }
    return 0;
}
