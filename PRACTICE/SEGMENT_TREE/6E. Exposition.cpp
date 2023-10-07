//https://codeforces.com/contest/6/problem/E
#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ll long long
#pragma GCC optimize("O3,expensive-optimizations,Ofast,unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
const int N=1e6+10;
const int mod1=998244353, mod2=1e9+7;
const int MAX=1e18;
const int p1=31, p2=37;
clock_t startTime;
double getCurrentTime() {
	return (double)(clock() - startTime) / CLOCKS_PER_SEC;
}

int n,k,a[N];

struct node{
    int mn=MAX,mx=-MAX;
} t[N];

void build(int id, int l, int r ){
    if (l==r){
        t[id]={a[l],a[l]};
        return;
    }
    int m=l+r>>1;
    build(id*2, l, m);
    build(id*2+1, m+1, r);
    t[id].mn=min(t[id*2].mn, t[id*2+1].mn);
    t[id].mx=max(t[id*2].mx, t[id*2+1].mx);
}
int get_min(int id, int l, int r, int u, int v){
    if (l>v or r<u) return MAX;
    if (l>=u and r<=v) return t[id].mn;
    int m=l+r>>1;
    return (min(get_min(id*2, l, m, u, v), get_min(id*2+1, m+1, r, u, v)));
}

int get_max(int id, int l, int r, int u, int v){
    if (l>v or r<u) return -MAX;
    if (l>=u and r<=v) return t[id].mx;
    int m=l+r>>1;
    return (max(get_max(id*2, l, m, u, v), get_max(id*2+1, m+1, r, u, v)));
}
int get_max(int l, int r){
    return get_max(1,1,n,l,r);
}
int get_min(int l, int r){
    return get_min(1,1,n,l,r);
}

void solve(){
    cin >> n >> k;
    for ( int i = 1; i <= n; i++){
        cin >> a[i];
    }
    build(1,1,n);
    //cout<<get_max(2,3)<<endl;
    int l=1,r=n, res=0;
    while (l<=r){
        int check=0;
        int m=l+r>>1;
        // cout<<m<<' '<<l<<' '<<r<<endl;
        // cout<<get_max(1,1+m)<<' '<<get_min(1,1+m)<<endl;
        for (int i=1; i<=n-m+1; i++){
            check|=(get_max(i,i+m-1)-get_min(i,i+m-1)<=k);
            // cout<<(get_max(i,i+m)-get_min(i,i+m)<=k)<<endl;
        }
        if (check) {
            l=m+1;
            res=m;
        }
        else r=m-1;
    }
    vector<pair<int,int>> ans;
    for (int i=1; i<=n-res+1; i++){
        // cout<<i<<' '<<i+res-1<<endl;
        // cout<<get_max(i,i+res-1)-get_min(i,i+res-1)<<endl;
        if (get_max(i,i+res-1)-get_min(i,i+res-1)<=k) ans.emplace_back(i,i+res-1);
    }
    cout<<res<<' '<<ans.size()<<endl;
    for (auto &[u,v]: ans) cout<<u<<' '<<v<<endl;

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
