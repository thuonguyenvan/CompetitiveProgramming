//https://codeforces.com/contest/1818/problem/D
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
int n,m,a,b;
int col[N], par[N], dd[N];
vector<int> graph[N];
vector<vector<int>> cycles;

// https://www.geeksforgeeks.org/print-all-the-cycles-in-an-undirected-graph/

void dfs_cycle(int u, int p, int& cyclenumber)
{
	if (col[u] == 2) {
		return;
	}
	if (col[u] == 1) {
		vector<int> v;
		cyclenumber++;
		int cur = p;
		v.push_back(cur);
		while (cur != u) {
			cur = par[cur];
			v.push_back(cur);
		}
		cycles.push_back(v);
		return;
	}
	par[u] = p;
	col[u] = 1;
	for (int v : graph[u]) {
		if (v == par[u]) {
			continue;
		}
		dfs_cycle(v, u, cyclenumber);
	}
	col[u] = 2;
}
void addEdge(int u, int v)
{
	graph[u].push_back(v);
	graph[v].push_back(u);
}

auto get_res(vector<int> cyc){
    vector<pair<int, int>> res;
    for (int i=0; i<cyc.size()-1; i++){
        res.push_back({cyc[i], cyc[i+1]});
    }
    res.push_back({cyc.front(), cyc.back()});
    return res;
}

void solve(){
    cin>>n>>m;
    cycles.clear();
    for (int i=0; i<=n; i++){
        graph[i].clear();
        par[i]=col[i]=dd[i]=0;
    }
    for (int i=1; i<=m; i++){
        cin>>a>>b;
        addEdge(a,b);
    }
    int cnt=0;
    for (int i=1; i<=n; i++){
        if (!col[i]) dfs_cycle(i,0,cnt);
    }
    int t=0;
    for (int i=0; i<cnt; i++){
        t++;
        for (auto u: cycles[i]) dd[u]=t;
        for (auto u: cycles[i]){
            vector<pair<int,int>> e;
            for (auto v:graph[u]) {
                if (dd[v]!=t) e.push_back({u,v});
                if (e.size()>=2) {
                    cout<<"YES"<<endl;
                    vector<pair<int,int>> res=get_res(cycles[i]);
                    res.push_back(e[0]);
                    res.push_back(e[1]);
                    cout<<res.size()<<endl;
                    for (auto q: res){
                        cout<<q.first<<' '<<q.second<<endl;
                    }
                    return;
                }
            }
        }
    }
    cout<<"NO";
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
