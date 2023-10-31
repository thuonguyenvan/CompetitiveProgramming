#include<bits/stdc++.h>
using namespace std;

#define int long long
#define ll long long
#pragma GCC optimize("O3,expensive-optimizations,Ofast,unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#define memset(a, n, val) for( int i = 0; i <= n; i++) a[i] = val
#define all(a) a.begin(), a.end()
const int N   = 1e6 + 10;
const int mod = 479001599;
const int MAX = INFINITY;
int tc = 1;

clock_t startTime;
double getCurrentTime() {
	return (double)(clock() - startTime) / CLOCKS_PER_SEC;
}

void solve(){ 
    int n; cin >> n;
    string s; cin >> s;
    int cur = 0;
    vector<int> res;
    if (n % 2) {
        cout << -1;
        return;
    }
    int cnt = 0;
    while (cnt < 300) {
        cnt++;
        while (s.size() and s[0] != s.back()) {
            s.pop_back();
            s.erase(s.begin());
            cur++;
        }
        // cout << s << endl;
        if (!s.size()) break;
        if (s[0] == '1'){
            res.push_back(cur);
            s.pop_back();
            s = '1' + s;
            cur++;
            
           // cout << s << 'a'<< endl;
        }
        else {
            res.push_back(cur + s.size());
            s.erase(s.begin());
            s = s + '0';
            cur++;
            
           // cout << s << 'b' << endl;
        }
    }
    if (cnt == 300) cout << -1 ;
    else {
        cout << res.size() << endl;
        for (auto x: res) cout << x << ' ';
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
    cin >> tc;
    while (tc--) {
        solve();
        cout << endl;
    }
    if (local) cout << getCurrentTime();
    return 0;
}