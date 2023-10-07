//https://codeforces.com/contest/911/problem/G
#include<bits/stdc++.h>
using namespace std;
//#define int long long
#define ll long long
#pragma GCC optimize("O3")
#pragma GCC optimize("expensive-optimizations")
#pragma GCC optimize("Ofast")
#pragma GCC optimize ("unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
// mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
// uniform_int_distribution<int> dist(1, (int) 2e9);

const int N=2e6+10;
const int mod=1e9+7;
//const int MAX=1e18;

int n, q, l, r;
char a[N], x, y;

void solve(){
    scanf("%d", &n);
    for (int i=1; i<=n; i++) scanf("%hhu", &a[i]);
    scanf("%d", &q);
    while (q--){
        scanf("%d%d%hhu%hhu", &l, &r, &x, &y);
        for (int i=l; i<=r; i++){
            a[i]=(a[i]==x)?y:a[i];
        }
    }
     for (int i=1; i<=n; i++) printf("%hhu ", a[i]);
    
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc=1; 
    //cin>>tc;
    while (tc--) solve();
    return 0;
}