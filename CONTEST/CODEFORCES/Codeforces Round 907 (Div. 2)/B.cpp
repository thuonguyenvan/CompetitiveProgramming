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
    int n, q; cin >> n >> q;
    int a[n + 1], b[q + 1], cnt[31], cur = 31;
    reset(cnt, 30);
    vector<int> v;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
       // res[i] = a[i];
    }
    for (int i = 1; i <= q; i++) {
        cin >> b[i];
        if (b[i] >= cur) continue;
        if (!cnt[b[i]]) v.push_back(b[i]);
        cnt[b[i]]++;
        cur = b[i];
    }
    for (auto x: v ){
        if (!cnt[x]) continue;
        for (int i = 1; i <= n; i++) {
            if (a[i] % (1 << x) == 0) a[i] += (1 << (x - 1)) * cnt[x];
            //cout << a[i] << ' ';
        }
        //cout << endl;
    }
    for (int i = 1; i <= n; i++) cout << a[i] << ' ';
    
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