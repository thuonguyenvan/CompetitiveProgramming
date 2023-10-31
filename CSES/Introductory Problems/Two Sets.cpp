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
    int n; cin >> n;
    if (n % 4 == 0) {
        cout << "YES\n";
        cout << n / 2 << endl;
        for (int i = 1; i <= n/4; i++) cout << i << ' ' << n - i + 1 << ' '; 
        cout << endl << n / 2 << endl;
        for (int i = n / 4 + 1, j = 0; j < n / 4; i++, j++) cout << i << ' '<< n - i + 1 << ' ';
    }
    else if (n % 4 == 3) {
        int top = n;
        cout << "YES\n";
        int i = 4;
        cout << n / 2 << endl << 3 << ' ';
        for (int j = 1; j <= n / 2 - 1; j += 2, i++) cout << i << ' ' << top-- << ' ';
        cout << endl << n / 2 + 1 << endl << 1 << ' ' << 2 << ' ';
        for (int j = 1; j <= n / 2 - 1; j += 2, i++) cout << i << ' ' << top-- << ' ';
    }
    else cout << "NO";
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
    //cin >> tc;
    while (tc--) {
        solve();
        cout << endl;
    }
    if (local) cout << getCurrentTime();
    return 0;
}