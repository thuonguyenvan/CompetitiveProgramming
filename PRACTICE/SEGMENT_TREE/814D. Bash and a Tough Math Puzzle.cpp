//https://codeforces.com/contest/914/problem/D
#include<bits/stdc++.h>
using namespace std;
const int N=2e6+10;
#define int long long
#define ll long long
int n,m, a[N], b[N],t[N], check, tot;

void build(int id, int l, int r){
    if (l==r) {
        t[id]=a[l];
        return;
    }
    int m=l+r>>1;
    build(id*2, l, m);
    build(id*2+1, m+1, r);
    t[id]=gcd(t[id*2], t[id*2+1]);
}
void update(int id, int l, int r, int pos, int val){
    if (pos<l or pos>r) return;
    if (l==r) {
        t[id]=val;
        return;
    }
    int m=l+r>>1;
    update(id*2,l,m,pos, val);
    update(id*2+1,m+1,r,pos, val);
    t[id]=gcd(t[id*2], t[id*2+1]);
}

int get(int id, int l, int r, int u, int v, int x){
    if (l>v or r<u) return 0;
    if (tot>=2) return -1;
   // cout<<l<<'l'<<r<<'r'<<t[id]<<endl;
    if (l>=u and r<=v and t[id]%x==0) return r-l+1 ;
    if (l==r) {
        //cout<<t[id]<<endl;
        tot+=1;
        if (tot>=2) return -1;
        return 1;
    }
    if (tot>=2) return -1;
    int m=l+r>>1;
    return (get(id*2, l, m, u, v, x) + get(id*2+1, m+1, r, u, v, x));
}

void solve(){
    cin>>n;
    for (int i=1; i<=n ;i++) cin>>a[i];
    build(1,1,n);
    cin>>m;
    while (m--){
        int type, x, y, z; cin>>type>>x>>y;
        if (type==1){
            cin>>z;
            //cout<<get(1,1,n,x,y,z)<<'a'<<endl;
            tot=0;
            int res=get(1,1,n,x,y,z);
            //cout<<res<<'a'<<tot<<endl;
           // if (tot>=2 ) cout<<"NO"<<endl;
           // else{
                if (res>=y-x+1) cout<<"YES"<<endl;
                else cout<<"NO"<<endl;
            //}
        }
        else{
            update(1,1,n,x,y);
        }
    }
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc=1; 
    //cin>>tc;
    while (tc--) solve();
    return 0;
}
