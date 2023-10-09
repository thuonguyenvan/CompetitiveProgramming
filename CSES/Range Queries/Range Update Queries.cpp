#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define int long long 
const int N=1e6+10;
int t[N], a[N], lz[N];
void build(int id, int l, int r){
  if (l==r) {
    t[id]=a[l];
    return;
  }
  int m=l+r>>1;
  build(id*2,l,m);
  build(id*2+1,m+1,r);
}
void push(int id){
    t[id*2]+=lz[id];
    t[id*2+1]+=lz[id];
    lz[id*2]+=lz[id];
    lz[id*2+1]+=lz[id];
    lz[id]=0;
}
int get(int id, int l, int r, int pos){
  if (pos<l or pos>r) return -1;
  if (l==r) return t[id];
  push(id);
  int m=l+r>>1;
  return max(get(id*2,l,m,pos), get(id*2+1,m+1,r,pos));
}
void update(int id, int l, int r, int u, int v, int val){
    if (v<l or u>r) return;
    if (l>=u and r<=v){
        t[id]+=val;
        lz[id]+=val;
        return;
    }
    int m=l+r>>1;
    push(id);
    update(id*2,l,m,u,v,val);
    update(id*2+1,m+1,r,u,v,val);
}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n,q; cin>>n>>q;
    for (int i=1; i<=n; i++) cin>>a[i];   
    build(1,1,n);
    while (q--){
      int type, x,y, val; cin>>type>>x;
      if (type-1){
        cout<<get(1,1,n,x)<<endl;
      }
      else{
        cin>>y>>val;
        update(1,1,n,x,y, val);
      }
    }
    return 0;
}