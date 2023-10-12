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
 
 
void solve(){
    ll n,k; cin>>n>>k;
    ll a[n+1];
    for (ll i=1; i<=n; i++) cin>>a[i];
    ll l=1, r=1e18, res=-1;
    while (l<=r){
        ll m=(l+r)/2;
        ll t=m,j=n;
        for (int i=0;  i<k; i++){
            while (j>0 and a[j]>t) j--;
            t-=j;
        } 
        if (t>0){
            res=m;
            r=m-1;
        }
        else l=m+1;
    }
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
