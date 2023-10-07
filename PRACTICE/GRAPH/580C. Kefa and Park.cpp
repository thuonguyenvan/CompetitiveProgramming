//https://codeforces.com/contest/580/problem/C
#include<bits/stdc++.h>
using namespace std;
const int N=2e6+10;
#define int long long
#define ll long long
int n,m,x,y,a[N],vs[N],res, check[N];
vector<vector<int>> g;

void dfs(int u, int val){
    vs[u]=1;
    if (val+a[u]>m) check[u]=1;
    if (!check[u] and g[u].size()==1 and u!=1) {
        //cout<<u<<'a'<<val<<endl;
        if(val+a[u]<=m) res++;
        return;
    }
    for (auto i:g[u]) {
        if (vs[i]) continue;
        check[i]=check[u];
        dfs(i, (a[u]?(val+a[u]):0));
    }
}

void solve(){
    cin>>n>>m;
    g=vector<vector<int>>(n+1);
    for (int i=1; i<=n; i++) cin>>a[i];
    for (int i=1; i<n; i++){
        cin>>x>>y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    dfs(1,0);
    cout<<res;

}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc=1; 
    //cin>>tc;
    while (tc--) solve();
    return 0;
}
