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
    int a[n + 1], res = -MAX;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        res = max(res, a[i]);
    }
    int cur = - MAX;
    for (int i = 1; i <= n ; i++){
        if (i > 1){
            if ((a[i] + a[i - 1]) % 2 == 0) {
                res = max(res, cur);
                cur = - MAX;
            }
        }
        cur = max( cur + a[i], a[i]);
        res = max (res , cur);
     //   cout << cur << ' ' << res << endl;
        
    }
    cout << max(cur, res);

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