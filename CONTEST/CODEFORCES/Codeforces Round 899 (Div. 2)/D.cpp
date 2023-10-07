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

int n, a[N], sz[N], res[N];
vector<vector<int>> g;

void dfs_get_sz(int u, int par){
    for (auto v: g[u]){
        if (v!=par) {
            dfs_get_sz(v, u);
            sz[u]+=sz[v];
        }
    }
    sz[u]+=1;
    res[1]+=(a[u]^a[par])*(sz[u]);
}

void dfs_get_res(int u, int par){
    res[u]=res[par]-(a[u]^a[par])*sz[u]+(a[u]^a[par])*(n-sz[u]);
    for (auto v: g[u]){
        if (v!=par){
            dfs_get_res(v,u);
        }
    }
}

void solve(){
    cin>>n;
    for (int i=1; i<=n; i++) cin>>a[i];
    g=vector<vector<int>> (n+1);
    for (int i=1; i<n; i++){
        int x,y; cin>>x>>y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    dfs_get_sz(1,1);
    dfs_get_res(1,1);
    for (int i=1; i<=n; i++) cout<<res[i]<<' ';
    cout<<endl;
    for (int i=0; i<=n; i++){
        res[i]=a[i]=sz[i]=0;
    }
    g.clear();
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);
    int tc=1; 
    cin>>tc;
    while (tc--) solve();
    return 0;
}