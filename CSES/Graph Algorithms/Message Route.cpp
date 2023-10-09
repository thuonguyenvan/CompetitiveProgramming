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
int n, m, check[N], par[N];
vector<vector<int>> g;
 
void solve(){
    cin>>n>>m;
    g=vector<vector<int>>(n+1);
    for (int i=1; i<=m; i++){
        int a,b; cin>>a>>b;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    check[1]=1;
    queue<int> que;
    que.push(1);
    while (!que.empty()){
        int u=que.front();
        que.pop();
        for (auto v: g[u]){
            if (!check[v]){
                que.push(v);
                par[v]=u;
                check[v]=check[u];
            }
        }
    }
    if (!check[n]) cout<<"IMPOSSIBLE";
    else{
        vector<int> res;
        int u=n;
        while (par[u]) {
            res.push_back(u);
            u=par[u];
        }
        res.push_back(1);
        reverse(res.begin(), res.end());
        cout<<res.size()<<endl;
        for (auto i : res) cout<<i<<' ';
    }
 
}
 
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);
    int tc=1; 
    //cin>>tc;
    while (tc--) {
        solve();
        cout<<endl;
    }
    return 0;
}