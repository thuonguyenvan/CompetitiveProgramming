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
    string s; cin >> s;
    char res = '?';
    int cnta = 0, cntb = 0;
    for (int i = 1; i <= 20; i++){
        int ta = 0, tb = 0, wa = 0, wb = 0, last = 0;
        for (auto x: s){
            ta += x == 'A';
            tb += x == 'B';
            if (ta == i){
                wa++;
                ta = tb = 0;
                last = 1;
            }
            if (tb == i){
                wb++;
                tb = ta = 0;
                last = 2;
            }
        }
        if (ta != 0  or tb != 0) continue;
        if (wa > wb and last == 1) {
           // cout << i << ' ' << wa << ' ' << wb << endl;
            res = 'A';
            cnta++;
        }
        if (wb > wa and last == 2) {
           // cout << i << ' ' << wa << ' ' << wb << endl;
            res = 'B';
            cntb++;
        }
    }  
   // cout << cnta << ' ' << cntb << endl;
    if (cnta and cntb) cout << "?";
    else cout <<(cnta?"A": "B");

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