//https://codeforces.com/contest/1567/problem/E
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define int long long 
#define N 200001
int a[N];

struct node{
    int cnt,cnt_l, cnt_r, val_l, val_r, sz;
}t[N*4];

node Merge(node a, node b){
    node ans;
    ans.cnt=a.cnt+b.cnt;
    if (a.val_r<=b.val_l){
        ans.cnt+=a.cnt_r*b.cnt_l;
        if (a.cnt_r==a.sz) ans.cnt_l=a.sz+b.cnt_l;
        else ans.cnt_l=a.cnt_l;
        if (b.cnt_r==b.sz) ans.cnt_r=a.cnt_r+b.sz;
        else ans.cnt_r=b.cnt_r;
    }
    else{
        ans.cnt_l=a.cnt_l;
        ans.cnt_r=b.cnt_r;
    }
    ans.val_l=a.val_l;
    ans.val_r=b.val_r;
    ans.sz=a.sz+b.sz;
    return ans;
}

void build(int id, int l, int r){
    if (l==r){
        t[id]={1,1,1, a[l], a[l],1,};
        return;
    }
    int m=(l+r)/2;
    build(id*2, l, m);
    build(id*2+1, m+1, r);
    t[id]=Merge(t[id*2],t[id*2+1]);
}
void up(int id, int l, int r, int p)
{
    if (p<l || r<p) return;
    if (l==r)
    {
        t[id] = {1, 1, 1, a[l], a[l], 1};
        return;
    }
    int m = (l+r)/2;
    up(id*2, l, m, p);
    up(id*2+1, m+1, r, p);
    t[id] = Merge(t[id*2], t[id*2+1]);
}
node get(int id, int l, int r, int u, int v){
    if (r<u || l>v) return {(0,0,0,0,0,0)};
    if (l>=u && r<=v) return t[id];
    int m=(l+r)/2;
    node t1=get(id*2, l, m, u, v);
    node t2=get(id*2+1, m+1, r, u, v);
    return Merge(t1,t2);
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n,m;
    cin>>n>>m;
    for (int i=1; i<=n; i++) cin>>a[i];
    build(1,1,n);
    while (m--){
        ll type, x, y; cin>>type>>x>>y;
        if (type==1){
            a[x]=y;
            up(1,1,n,x);
        }
        else{
            node res=get(1,1,n,x,y);
            cout<<res.cnt<<endl;
        }
    }
    return 0;
}