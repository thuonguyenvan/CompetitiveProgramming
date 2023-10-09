#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define int long long 
const int N=1e6+10;
int t[N], a[N];
void build(int id, int l, int r){
  if (l==r) {
    t[id]=a[l];
    return;
  }
  int m=l+r>>1;
  build(id*2,l,m);
  build(id*2+1,m+1,r);
  t[id]=t[id*2]+t[id*2+1];
}
int get(int id, int l, int r, int u, int v){
  if (l>v or r<u ) return 0;
  if (l>=u and r<=v) return t[id];
  int m=l+r>>1;
  return((get(id*2,l,m,u,v)+get(id*2+1,m+1,r,u,v)));
}
void update(int id, int l, int r, int pos, int val){
    if (pos<l or pos>r) return;
    if (l==r){
        a[pos]=val;
        t[id]=val;
        return;
    }
    int m=l+r>>1;
    update(id*2,l,m,pos,val);
    update(id*2+1,m+1,r,pos,val);
    t[id]=t[id*2]+t[id*2+1];
}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n,q; cin>>n>>q;
    for (int i=1; i<=n; i++) cin>>a[i];   
    build(1,1,n);
    while (q--){
      int type, x,y; cin>>type>>x>>y;
      if (type-1){
        cout<<get(1,1,n,x,y)<<endl;
      }
      else{
        update(1,1,n,x,y);
      }
    }
    return 0;
}