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

void dfs(int u, int par, vector<vector<int>> &g, vector<int> &euler){
    euler.push_back(u);
    for (auto v: g[u]) if (v != par) dfs(v, u, g, euler);
    euler.push_back(u);
}

void build(int id, int l, int r, int *a, int *t){
    if (l == r){
        t[id] = a[l];
        return;
    }
    int m = l + r >> 1;
    build(id * 2, l, m, a, t);
    build(id * 2 + 1, m + 1, r, a, t);
    t[id] = t[id * 2] + t[id * 2 + 1];
}

void update(int id, int l, int r, int pos, int val, int *t){
    if (pos < l or pos > r) return;
    if (l == r){
        t[id] = val;
        return;
    }
    int m = l + r >> 1;
    update(id * 2, l, m, pos, val, t);
    update(id * 2 + 1, m + 1, r, pos, val, t);
    t[id] = t[id * 2] + t[id * 2 + 1];
}
int get(int id, int l, int r, int u, int v, int *t){
    if (l > v or r < u) return 0;
    if (l >= u and r <= v) return t[id];
    int m = l + r >> 1;
    return get(id * 2, l, m, u, v, t) + get(id * 2 + 1, m + 1, r, u, v, t);
}
void solve(){ 
    int n, q; 
    cin >> n >> q;
    int a[n + 1];
    for (int i = 1; i <= n; i++) cin >> a[i];
    vector<vector<int>> g(n + 1);
    for (int i = 1; i < n; i++ ){
        int x, y;
        cin >> x >> y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    vector<int> euler;
    dfs(1, 0, g, euler);
    map<int, pair<int, int>> info;
    int m = euler.size();
    for (int i = 0; i < m; i++) {
        if (info[euler[i]].first) info[euler[i]].second = i + 1;
        else info[euler[i]].first = i + 1;
    }
    int val[m + 1], t[4 * m + 1];
    reset(val, m);
    reset(t, 4 * m);
    for (int i = 1; i <= n; i++){
        val[info[i].first] = a[i];
        val[info[i].second] = - a[i];
    }
    build(1, 1, m, val, t);
    // for (auto x: euler) cout << x << ' ';
    // cout << endl;
    // for (int i = 1; i <= m; i++) cout << val[i] << ' ';
    // cout << endl;
    // for (int i = 1; i <= 4 * m; i++) cout << t[i] << ' ';
    // cout << endl;
    for (int i = 1; i <= q; i++){
       // cout << "check: " << get(1, 1, m, 1, 1, t) << endl;
        int x, y, z;  
        cin >> x >> y;
        if (x == 1) {
            cin >> z;
            update(1, 1, m, info[y].first, z, t);
            update(1, 1, m, info[y].second, -z, t);
        }
        else cout << get(1, 1, m, info[1].first, info[y].first, t) << endl;
    }

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
   // cin >> tc;
    while (tc--) {
        solve();
        cout << endl;
    }
    if (local) cout << getCurrentTime();
    return 0;
}