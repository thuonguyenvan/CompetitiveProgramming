//https://codeforces.com/contest/1873/problem/H
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

int n, a, b, marcel, valeriu, dis1=MAX, dis2=MAX, vs[N];
vector<vector<int>> g;

void dfs1(int u, int d, int par){
    vs[u]=1;
    for (auto v: g[u]){
        if (marcel) return;
        if (!vs[v]){
            dfs1(v,d+1,u);
        }
        else{
            if (v!=par){
                marcel=v;
                return;
            }
        }
    }
}

void dfs2(int u, int d, int par){
    vs[u]=1;
    for (auto v: g[u]){
        if (valeriu) return;
        if (!vs[v]){
            dfs2(v,d+1,u);
        }
        else{
            if (v!=par){
                valeriu=v;
                return;
            }
        }
    }
}

/*
int dfs_get_dis(int u, int v){
	if(u==v) return 0;
	vs[u]=1;
	int mdis=1e9;
	for(auto i:g[u])
		if(!vs[i]) mdis=min(mdis,dfs_get_dis(i,v)+1);
	return mdis;
}
*/
int dfs_get_dis(int u, int v){
    
    int tm=MAX;
    if (u==v) return 0;
    vs[u]=1;
    for (auto i: g[u]){
        if (!vs[i]) tm=min(tm, dfs_get_dis(i,v)+1);
    }
    return tm;
}
void solve(){
    cin>>n>>a>>b;
    g=vector<vector<int>>(n+1);
    for (int i=1; i<=n; i++){
        int x, y; cin>>x>>y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    if (a==b) {
        cout<<"NO"<<endl; return;
    }
    dfs1(a,1,0);
    for (int i=0; i<=n; i++) vs[i]=0;
    dfs2(b,1,0);
    for (int i=0; i<=n; i++) vs[i]=0;
    dis1=dfs_get_dis(a,valeriu);
    for (int i=0; i<=n; i++) vs[i]=0;
    dis2=dfs_get_dis(b,valeriu);
    for (int i=0; i<=n; i++) vs[i]=0;
    cout<<(dis2<dis1?"YES":"NO")<<endl;
    //cout<<dis1<<' '<<dis2<<endl;
    marcel=valeriu=0;
    dis2=dis1=MAX;


    // if (marcel==valeriu){
    //     cout<<((dis2<dis1)?"YES":"NO")<<endl;
    // }
    // else cout<<((dis2<=dis1)?"YES":"NO")<<endl;
    for (int i=0; i<=n; i++){
        vs[i]=0;
    }
    g.clear();
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
    int tc=1; 
    cin>>tc;
    while (tc--) solve();
    return 0;
}