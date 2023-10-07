//https://codeforces.com/contest/1187/problem/D
#include<bits/stdc++.h>
using namespace std;
const int N=2e6+10;
#define int long long
#define ll long long
int n,m, a[N], b[N],t[N];

void build(int id, int l, int r){
    if (l==r) {
        t[id]=a[l];
        return;
    }
    int m=l+r>>1;
    build(id*2, l, m);
    build(id*2+1, m+1, r);
    t[id]=min(t[id*2], t[id*2+1]);
}
void update(int id, int l, int r, int pos){
    if (pos<l or pos>r) return;
    if (l==r) {
        t[id]=N;
        return;
    }
    int m=l+r>>1;
    update(id*2,l,m,pos);
    update(id*2+1,m+1,r,pos);
    t[id]=min(t[id*2], t[id*2+1]);
}

int get(int id, int l, int r, int u, int v){
    if (l>v or r<u) return N;
    if (l>=u and r<=v) return t[id];
    int m=l+r>>1;
    return min(get(id*2, l, m, u, v), get(id*2+1, m+1, r, u, v));
}

void solve(){
    cin>>n;
    vector<vector<int>> p(n+1);
    for (int i=1;i<=n; i++){
        cin>>a[i];
        p[a[i]].push_back(i);
    }
    for (int i=1;i<=n; i++){
        cin>>b[i];
        reverse(p[i].begin(), p[i].end());
    }
    build(1,1,n);
    int res=1;
    for (int i=1; i<=n; i++){
        if (p[b[i]].empty()){
            res=0;
            break;
        } 
        int k=p[b[i]].back();
        p[b[i]].pop_back();
       // if (a[i]==b[i]) continue;
        if (get(1,1,n,1,k)!=b[i]) res=0; 
        //cout<<b[i]<<'a'<<get(1,1,n,i,k)<<'b'<<i<<k<<endl;
        update(1,1,n,k);
    }
    cout<<(res?"YES":"NO")<<endl;
    for (int i=0; i<=4*n; i++){
        t[i]=a[i]=b[i]=0;
    }

}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc=1; 
    cin>>tc;
    while (tc--) solve();
    return 0;
}
