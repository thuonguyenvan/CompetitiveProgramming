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

int n, a, b, c, d, k, last, dis, mdis=MAX, res=0;
int vs[N], w1[N];
vector<vector<int>> g;
/*
- xet mot node, lay m1 va m2 khoang cach lon nhat -> res = max( m1*k - d*c, m1*k - d*c + m2*(k-c))
- doi voi mot node con, return max dis
*/
int dfs(int node, int par, int d){
    int m1=0,m2=0;
    for (auto i: g[node]){
        if (i==par) continue;
        int t=dfs(i,node,d+1)+1;
        if (t>m1){
            m2=m1;
            m1=t;
        }
        else m2=max(m2,t);
    }
    res=max(res,m1*k-d*c+max(0ll, m2*(k-c)));
    return m1;
}

void solve(){
    cin>>n>>k>>c;
    g=vector<vector<int>>(n+1);
    for (int i=1; i<n; i++){
        cin>>a>>b;
        g[a].emplace_back(b);
        g[b].emplace_back(a);
    }
    dfs(1,0,0);
    cout<<res;
    res=0;
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
