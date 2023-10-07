#include<bits/stdc++.h>
using namespace std;
const int N=2e6+10;
#define int long long
#define ll long long
const int mod=998244353;
const int MAX=1e18;
int n, a[N], t[N],q,l,r,k;

void build(int id, int l, int r){
    if (l==r){
        t[id]=a[l];
        return;
    }
    int m=(l+r)/2;
    build(id*2, l, m);
    build(id*2+1, m+1, r);
    t[id]=(t[id*2]&t[id*2+1]);
}
int get(int id, int l, int r, int u, int v){
    if (l>v or r<u) return (1<<30)-1;
    if (l>=u and r<=v) return t[id];
    int m=l+r>>1;
    return (get(id*2,l,m,u,v)&get(id*2+1,m+1,r,u,v));
}
void solve(){
    cin>>n;
    for (int i=1; i<=4*n; i++){
        a[i]=t[i]=0;
    }
    for (int i=1; i<=n; i++) cin>>a[i];
    build (1,1,n);
    cin>>q;
    //for (int i=1; i<=4*n; i++) cout<<t[i]<<' ';
    while (q--){
        cin>>l>>k;
        int ltemp=l, rtemp=n, res=-1;
        while (ltemp<=rtemp){
            int m=ltemp+rtemp>>1;
            if (get(1,1,n,l,m)>=k) {
                res=m;
                ltemp=m+1;
                }
            else rtemp=m-1;
        }
        cout<<res<<' ';
    }
    for (int i=1; i<=4*n; i++){
        a[i]=t[i]=1;
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