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
    ll n,k, f[29], res=0; 
    cin>>n>>k;
    if (k>28) {
        cout<<0<<endl;
        return;
    }
    f[k]=n;
    for (ll i=n; i>=0; i--){
        f[k-1]=i;
        ll check=1;
        for (ll j=k-2; j>0; j--){
            f[j]=f[j+2]-f[j+1];
            if (f[j]>f[j+1] or f[j]<0) {
                check=0; 
                break;
            }
        }
        res+=check;
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
