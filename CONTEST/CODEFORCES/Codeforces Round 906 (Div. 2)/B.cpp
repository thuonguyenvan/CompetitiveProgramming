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

void solve(){ 
    int n, m;
    cin >> n >> m;
    string s, t;
    cin >> s >> t;
    int cs = 0, ct = 0;
    for (int i = 1; i < n; i++ ) {
        if (s[i] == s[i-1]){
            if (s[i - 1] == t[0] || s[i] == t.back()){
                cout << "NO";
                return;
            }
        }
        cs |= (s[i] == s[i - 1]);
    }
    for (int i = 1; i < m; i++) ct |= (t[i] == t[i - 1]);
    cout << (cs + ct == 2 ? "NO" : "YES");
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