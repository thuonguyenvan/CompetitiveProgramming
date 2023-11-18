#include<bits/stdc++.h>
using namespace std;

#define int long long
#define ll long long
#pragma GCC optimize("O3,expensive-optimizations,Ofast,unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#define reset(a,n) for( int i = 0; i <= n; i++) a[i] = 0
#define all(a) a.begin(), a.end()
const int N   = 1e6 + 10;
const int mod = 479001599;
const int MAX = 1e18 + 1;

clock_t startTime;
double getCurrentTime() {
	return (double)(clock() - startTime) / CLOCKS_PER_SEC;
}



void solve(){ 
    int n;
    cin >> n;
    int a[n + 1], res = -MAX, pre[n + 1];
    reset(pre, n);
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        pre[i] = pre[i - 1] + a[i];
     //   cout << pre[i] << ' ' << a[i] << ' ' << pre[i - 1] << endl;
    }
    for (int i = 1; i <= n; i++){
        if (n % i ) continue;
        int mn = MAX, mx = - MAX;
        for (int j = i; j <= n; j+=i){
            mn = min(mn, pre[j] - pre[j - i ]);
            mx = max(mx, pre[j] - pre[j - i ]);
           // cout << pre[j] << ' '<< pre[j - i] << ' '<< j << ' ' << j - i<< endl;
        }
        res = max( res, mx - mn);
       // cout << i << ' ' << mx - mn << endl;
    }
    cout  << res;

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