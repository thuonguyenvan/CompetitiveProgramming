//https://codeforces.com/contest/1851/problem/E
#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ll long long
#pragma GCC optimize("O3,expensive-optimizations,Ofast,unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
const int N=2e6+10;
const int mod=1e9+7;
const int MAX=1e18;
clock_t startTime;
double getCurrentTime() {
	return (double)(clock() - startTime) / CLOCKS_PER_SEC;
}

int n, a, b, k;
int coins[N], res[N], vs[N];
vector<vector<int>> way;

void dfs(int u){
    vs[u]=1;
    int t=0;
    for (auto v: way[u]){
        if (!vs[v]) dfs(v);
        t+=res[v];
    }
    res[u]=min(t,coins[u]);
}

void solve(){
    cin>>n>>k;
    way=vector<vector<int>>(n+1);
    for (int i=1; i<=n; i++) cin>>coins[i];
    for (int i=1; i<=k; i++) {
        cin>>a;
        coins[a]=0;
    }
    for (int i=1; i<=n; i++){
        cin>>a;
        for (int j=1; j<=a; j++){
            cin>>b;
            way[i].push_back(b);
        }
        if (a==0) {
            res[i]=coins[i];
            vs[i]=1;
        }
    }
    for (int i=1; i<=n; i++){
        if (!vs[i]) dfs(i);
        cout<<res[i]<<' ';
    }
    for (int i=0; i<=n; i++) coins[i]=vs[i]=0;
    way.clear();
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
    int tc=1; 
    cin>>tc;
    while (tc--) {
        solve();
        cout<<endl;
    }
    return 0;
}
