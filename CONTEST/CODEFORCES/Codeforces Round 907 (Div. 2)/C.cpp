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
    vector<int> a;
    for (int i = 1; i <= n; i++){
        int x; cin >> x;
        a.push_back(x);
    }
    sort(all(a));
    int i = 0, j = n - 1, x = 0, res = 0;
    while (i < j){
        int l = min(a[i], a[j] - x);
        a[i] -= l;
        x += l;
        res += l;
        if (!a[i]) i++;
        if (x == a[j]){
            res++;
            a[j] = 0;
            j--;
            x = 0;
        }
    }
    
    if (i == j){
        if (a[j] == 1) res++ ;
        else {
            int t = (a[j] + x);
            int l = t / 2;
            res += l - x + 1 + t % 2;
        }
    }
    cout << res << endl;
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