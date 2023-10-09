#include<bits/stdc++.h>
using namespace std;
const int N=1e6+10;
#define int long long
#define ll long long
int n, a[N], c[N], val[N], check[N], mx=1e18;
struct node{
    int val, pos;
}t[N];

node merge(node a, node b){
    if (a.val==mx) return b;
    if (b.val==mx) return a;
    return (a.val>b.val)?b:a;
}

void build(int id, int l, int r){
    if (l==r){
        t[id].val=val[l];
        t[id].pos=l;
        return;
    }
    int m=l+r>>1;
    build(id*2, l, m);
    build(id*2+1, m+1,r);
    t[id]=merge(t[id*2], t[id*2+1]);
}
void update(int id, int l, int r, int pos, int k){
    if (pos<l or pos>r) return;
    if (l==r){
        val[pos]-=k;
        if (val[pos]<0) val[pos]=mx;
        t[id].val=val[pos];
        return;
    }
    int m=l+r>>1;
    update(id*2, l, m, pos, k);
    update(id*2+1, m+1,r, pos, k);
    t[id]=merge(t[id*2], t[id*2+1]);
} 

void solve(){
    cin>>n;
    for (int i=1; i<=n; i++) cin>>a[i];
    for (int i=1; i<=n; i++) {
        cin>>c[i];
        val[a[i]]+=c[i];
    }
    build(1,1,n);
    int cnt=0;
    while (t[1].val!=mx){
        int res=t[1].pos;
        cout<<res<<' ';
        int k=c[t[1].pos];
        update(1,1,n,res,mx);
        update(1,1,n,a[res], c[res]);
        if (++cnt==n) break;
    }
    for (int i=0; i<=4*n; i++){
        t[i].val=t[i].pos=a[i]=c[i]=val[i]=0;
    }
    cout<<endl;
}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc=1; 
    cin>>tc;
    while (tc--) solve();
    return 0;
}
