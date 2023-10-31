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
    int n, k; cin >> n >> k;
    if (k % 2){
        cout << "YES" << endl;
        for (int i = 1; i <= n; i+=2) cout << i << ' ' << i + 1 << endl;
    }
    else {
        if (k % 4){
            cout << "YES" << endl;
            for (int i = 1; i <= n; i+=2) {
                if ((i+1) % 4 ) cout << i + 1  << ' ' << i << endl;
                else cout << i << ' ' << i + 1 << endl;
            }
        }
        else cout << "NO" <<endl;
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