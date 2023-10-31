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
// bo cai lon nhat cua a, va cai be nhat cua b
void solve(){ 
    int n, k; cin >> n >> k;
    vector<int> a(n), b(n);
    a[0] = 1;
    for (int i = 1; i < n; i++) cin >> a[i];
    for (auto &x: b) cin >> x;
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    int res = n, l = 0, r = n;
    while (l <= r){
        int m = l + r >> 1;
        vector<int> ta = a;
        vector<int> tb = b;
        reverse(all(tb));
        for (int i = 1; i <= m; i++) {
            ta.pop_back();
            tb.pop_back();
        }
        //for (int i = 0; i <= n-m; i++) cout << ta[i];
        reverse(all(tb));
        int check = 1;
        for (int i = 0; i < n - m; i++){
            check &= (ta[i] < tb[i]);
        //  cout << m << ' ' << check << ' ' << ta[i] <<  ' ' << tb[i];
        // cout << "\n";
        }
        if (check) {
            res = m;
            r = m - 1;
        }
        else l = m +1;
    }
    cout << res;
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