#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10;
#define int long long
#define ll long long
const int mod=998244353;
int n, vs[N],m;
int dx[]={1,-1,0,0}, dy[]={0,0,1,-1};
vector<vector<int>> g;
vector<int> res;
 
void dfs(int u){
    vs[u]=1;
    for (auto x: g[u]){
        if (vs[x]) continue;
        dfs(x);
    }
}
 
void solve(){
    cin>>n>>m;
    g=vector<vector<int>>(n+1);
    while (m--){
        int x,y; cin>>x>>y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    for (int i=1; i<=n; i++){
        if (vs[i]) continue;
        res.push_back(i);
        dfs(i);
    }
    cout<<res.size()-1<<endl;
    for (int i=0; i<res.size()-1; i++){
        cout<<res[i]<<' '<<res[i+1]<<endl;
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