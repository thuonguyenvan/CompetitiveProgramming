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
vector<vector<int>> g;
int a[N];
int v, dis;
void dfs(int u, int par, int d){
    if (a[u] and d > dis) {
        v = u;
        dis = d;
        //cout << u << ' ' << par << ' ' << dis << endl;
    }
    //cout << v << endl;
    for (auto x: g[u]) if (x != par) dfs(x, u, d + 1);
    //if (dis > 20) return;
}


void solve(){ 
    int n, m, x; cin >> n >> m;
    for (int i = 1; i <= m; i++) {
        cin >> x;
        a[x] = 1;
    }
    v = x;
    g = vector<vector<int>>(n + 1);
    for (int i = 1; i < n; i++) {
        int x, y; cin >> x >> y;
        // cout << x << ' ' << y << endl;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    // cout << n << ' ' << m << endl;
    dfs(x, 0, 0);
    // cout << v << endl;
    dfs(v, 0, 0);
     cout << (m == 1 ? 0 : dis / 2 + dis % 2);
    dis = 0;
    reset(a, n);
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