#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10;
#define int long long
#define ll long long
const int mod=998244353;
int n, vs[N], res, used[N];
vector<vector<int>> g;
void dfs(int u, int pa){
    vs[u]=1;
    for (auto i: g[u]){
        if (!vs[i]){
            dfs(i,u);
        }
    }
    if (!used[pa] and !used[u]){
        res++;
        used[pa]=used[u]=1;
    }
}
 
void solve(){
    used[0]=1;
    cin>>n;
    g=vector<vector<int>>(n+1);
    for (int i=2; i<=n; i++){
        int x,y; cin>>x>>y;
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