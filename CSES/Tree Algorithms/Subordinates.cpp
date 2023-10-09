#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10;
#define int long long
#define ll long long
const int mod=998244353;
int n, res[N], vs[N];
vector<vector<int>> g;
 
void dfs(int u){
    vs[u]=1;
    for (auto i: g[u]){
        if (!vs[i]){
            dfs(i);
            res[u]+=res[i]+1;
        }
    }
}
 
void solve(){
    cin>>n;
    g=vector<vector<int>>(n+1);
    for (int i=2; i<=n; i++){
        int x; cin>>x;
        g[x].push_back(i);
    }
    dfs(1);
    for (int i=1; i<=n; i++){
        cout<<res[i]<<' ';
    }
 
}
 
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc=1; 
    //cin>>tc;
    while (tc--) solve();
    return 0;
}