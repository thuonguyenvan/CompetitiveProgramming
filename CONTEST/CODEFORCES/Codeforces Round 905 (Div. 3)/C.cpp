#include<bits/stdc++.h>
using namespace std;

#define int long long
#define ll long long
#pragma GCC optimize("O3,expensive-optimizations,Ofast,unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#define reset(a,n) for( int i = 0; i <= n; i++) a[i] = 0
const int N   = 1e6 + 10;
const int mod = 479001599;
const int MAX = 1e18;

clock_t startTime;
double getCurrentTime() {
	return (double)(clock() - startTime) / CLOCKS_PER_SEC;
}

void solve(){ 
    int n, k;
    cin >> n >> k;
    int a[n + 1];
    int res, mn = MAX, mx = - MAX, c1 = 0, c2 = 0;
    for (int i = 1; i <= n ; i++) {
        cin >> a[i];
        a[i] %= k;
        mn = min(mn, a[i]);
        mx = max(mx, a[i]);
        if (a[i] == 1) c1 ++;
        if (a[i] == 2) c2++;
    }
    if (!mn) {
        cout << 0; 
        return;
    }
    if ( k == 4) {
        if (c1 > 1) res = 2;
        if (c2 and c1 ) res = 1;
        if (c2 > 1) res = 0;
        res = min(res, k - mx);
        cout << res;
        return;
    }
    cout << k - mx;

}
 
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    int local = 0;
	if(fopen("input.txt", "r")){
        freopen("input.txt", "r", stdin); 
        freopen( "output.txt", "w", stdout);
        local = 1;
    }
    int tc = 1; 
    cin >> tc;
    while (tc--) {
        solve();
        cout << endl;
    }
    if (local) cout << getCurrentTime();
    return 0;
}