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
int n, q; 
int a[N], greater_b[N], greater_fr[N], vsf[N], vsb[N];
void solve(){ 
    reset(a, n);
    reset(greater_b, n);
    reset(greater_fr, n);
    reset(vsf, n);
    reset(vsb, n);
    
    cin >> n >> q;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        for (int j = a[i] - 1; j > 0; j--){
            if (vsf[j]) break;
            greater_fr[j] = i;
            vsf[j] = 1;
        }
    }
    while (q--){
        int i, k;
        cin >> i >> k;
        if (i == 1 and a[i] < a[i + 1]) {
            cout << 0 << endl;
            continue;
        }
        if (greater_fr[a[i]] and greater_fr[a[i]] < i) {
            cout << 0 << endl;
            continue;
        }
        int tk = k - max(0ll, i - 2);
        //cout << i << ' ' << k << ' ' << tk << endl;
        if (a[i] == n){
            cout << max(tk, 0ll) << endl;
            continue;
        }
        if (i == 1 ) cout << max(0ll, max(0ll, min(greater_fr[a[i]] - i - 1 , tk)) ) << endl;
        else cout << max(0ll, min(greater_fr[a[i]] - i , tk)) << endl;
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
    cin >> tc;
    while (tc--) {
        solve();
        cout << endl;
    }
    if (local) cout << getCurrentTime();
    return 0;
}