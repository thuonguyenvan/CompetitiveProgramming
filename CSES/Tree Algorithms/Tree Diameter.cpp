#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10;
#define int long long
#define ll long long
const int mod=998244353;
int n, vs[N], res, last;
vector<vector<int>> g;
void dfs(int u, int sz){
   // cout<<u<<'a'<<sz<<endl;
    vs[u]=1;
   // res=max(res,sz);
    if (sz>res) {
        res=sz;
        last=u;
    }
    for (auto i: g[u]){
        if (!vs[i]){
            dfs(i, sz+1);
        }
    }
}
 
void solve(){
    cin>>n;
    g=vector<vector<int>>(n+1);
    for (int i=2; i<=n; i++){
        int x,y; cin>>x>>y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    dfs(1,0);
    for (int i=1; i<=n; i++) vs[i]=0;
    dfs(last,0);
    //cout<<last<<endl;
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