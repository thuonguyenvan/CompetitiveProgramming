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
    vector<int> a(n), b(m);
    for (auto &x: a) cin >> x;
    for (auto &x: b) cin >> x;
    sort(all(b));
    reverse(all(b));
    vector<int> res;
    int i = 0, j = 0;
    //cout << n << ' ' << m << endl;
    while (i < n and j < m){
        while (a[i] >= b[j] and i < n) res.push_back(a[i++]);
        while (b[j] >= a[i] and j < m) res.push_back(b[j++]);
    }
    if (i == n) while (j < m) res.push_back(b[j++]);
    else if (j == m) while (i < n ) res.push_back(a[i++]);
    for (auto x: res) cout << x << ' ';
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