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
const int MAX = INFINITY;

clock_t startTime;
double getCurrentTime() {
	return (double)(clock() - startTime) / CLOCKS_PER_SEC;
}

int dp[N], n, m, x;
void solve(){ 
    cin >> n;
    map<int, int> a;
    for (int i = 1; i <= n; i++){
        cin >> x;
        a[x]++;
        dp[i - 1] = MAX;
    }
    while (a[m]) m++;
    dp[m] = 0;
    for (int i = m; i >= 0; i--){
        for (int j = 0; j < i; j++){
            //cout << a[j] << endl;
            dp[j] = min(dp[j], dp[i] + a[j] * i);
            //cout << dp[j] << ' ' << dp[i] << ' ' << j << ' ' << i << endl;
        }
    }
    cout << dp[0] - m;
    reset(dp, n);
    m = 0;
    
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