#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define int long long 
#define N 200001
int a[N], b[N];
struct node{
    int val, pos;
}t[4*N];
node merge(node t1, node t2){
    if (t1.val>t2.val) return t2;
    else return t1;
}
void build(int id, int l, int r){
    if (l==r){
        t[id].val=b[l];
        t[id].pos=l;
        return;
    }
    int m=(l+r)/2;
    build(id*2, l, m);
    build(id*2+1, m+1, r);
    t[id]=merge(t[id*2], t[id*2+1]);
}
void update(int id, int l, int r, int idx, int val){
    if (idx<l or idx>r) return;
    if (l==r){
        b[l]=val;
        t[id].val=val;
        return;
    }
    int m= (l+r)/2;
    update(id*2, l,m,idx,val);
    update(id*2+1, m+1, r, idx, val);
    t[id]=merge(t[id*2], t[id*2+1]);
}
node get (int id, int l, int r, int x, int y){
    if (l>y or r<x) return {(int)1e18, -1};
    if (l>=x and r<=y) return t[id];
    int m=(l+r)/2;
    return merge(get(id*2, l,m,x,y) , get(id*2+1, m+1,r,x,y));
}
 
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc; cin>>tc;
    while (tc--){
        int n,m,d; cin>>n>>m>>d;
        for (int i=1; i<=n ;i++){
            cin>>a[i];
            b[i]=(a[i]<=0)?1e18:a[i];
        }
        build(1,1,n);
        int res=0, cnt=0, tot=0;
        for (int i=1; i<=n; i++){
            if (a[i]<=0) continue;
            tot+=a[i];
            res=max(res, tot-d*i);
            cnt++;
            if (cnt>=m){
                node t=get(1,1,n,1,i);
                tot-=t.val;
               // cout<<t.val<<endl;
                update(1,1,n,t.pos, (int)1e18);
            }
        }
        cout<<res<<endl;
    }
    return 0;
}