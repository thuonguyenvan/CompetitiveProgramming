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
// can bao nhieu thao tac de i so khong dau tien deu la 0
void solve(){ 
    int n; cin >> n;
    string s; cin >> s;
    reverse(s.begin(), s.end());
    vector<int> id0; 
    for (int i = 0; i < n; i++ ) if (s[i] == '0') id0.push_back(i);
    reverse(all(id0));
    int pre = 0, l = id0.size();
    for (int i = 0; i < l; i++ ){
        pre += max(-1ll, id0.back() - i);
        cout << pre << ' ';
        id0.pop_back();
    }
    for (int i = l; i < n; i++ ) cout << -1 << ' '; 
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