#include<bits/stdc++.h>
using namespace std;

#define int long long
#define ll long long
#pragma GCC optimize("O3,expensive-optimizations,Ofast,unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#define reset(a,n) for( int i = 0; i <= n; i++) a[i] = 0
const int N   = 1e6 + 10;
const int mod = 479001599;
const int MAX = 1e18;

clock_t startTime;
double getCurrentTime() {
	return (double)(clock() - startTime) / CLOCKS_PER_SEC;
}

/*
neu n - k le: c bat ky
neu n - k chan: k - c phai chan 
*/

void solve(){ 
    int cnt[26];
    reset(cnt, 25);
    char x;
    int n, k;
    cin >> n >> k;
    for (int i = 1; i <= n; i++){
        cin >> x;
        cnt[x-'a']++;
    }
    int c=0;
    for (int i = 0; i <= 25; i++){
        if (cnt[i] % 2) c++;
    }
    if (c - 1 > k) {
        cout << "NO"; 
        return;
    }
    if (k % 2) {
        cout << "YES";
        return;
    }
    if ( (n - k) % 2 == 0 and ( k - c) % 2 ) {
        cout << "NO";
        return;
    }
    cout << "YES";
    


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