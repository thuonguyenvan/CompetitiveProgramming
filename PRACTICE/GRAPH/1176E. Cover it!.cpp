//https://codeforces.com/contest/1176/problem/E
#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10;
#define int long long
#define ll long long
const int mod=1e9+7;
int n,m, vs[N], cnt;
vector<int> res;
vector<vector<int>> graph;
void dfs(int q, int u){
    if (vs[u]) return;
    vs[u]=q;
    if (q%2) cnt+=1;
    for (auto i:graph[u]){
        if (!vs[i]) dfs(q+1,i);
    }
}
void solve(){
    cin>>n>>m;
    graph=vector<vector<int>>(n+1);
    for (int i=1; i<=m; i++){
        int x,y; 
        cin>>x>>y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }
    for (int i=1; i<=n; i++){
        dfs(1,i);
    }
    int t=(int)(cnt<=n/2);
    for (int i=1; i<=n; i++) {
        if (vs[i]%2==t) res.push_back(i);
    }
    cout<<res.size()<<endl;
    for (auto i: res) cout<<i<<' ';
    cout<<endl;
    res.clear();
    graph.clear();
    cnt=0; 
    for (int i=0; i<=n; i++) vs[i]=0;
}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc=1; 
    cin>>tc;
    while (tc--) solve();
    return 0;
}
