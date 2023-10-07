//https://codeforces.com/contest/1872/problem/E
#include<bits/stdc++.h>
using namespace std;
const int N=1e6+10;
#define int long long
#define ll long long
int a[N], res[2], n, pre0[N], pre1[N], q;
string s;
void solve(){
    cin>>n;
    for (int i=1; i<=n; i++) cin>>a[i];
    cin>>s;
    for (int i=1; i<=n;i++){
        pre1[i]=pre1[i-1];
        pre0[i]=pre0[i-1];
        if (s[i-1]=='0') pre0[i]^=a[i];
        else pre1[i]^=a[i];
    }
    res[0]=pre0[n]; res[1]=pre1[n];
    cin>>q;
    while (q--){
        int type,x,y; cin>>type>>x;
        if (type==1){
            cin>>y;
            int t=pre0[y]^pre0[x-1]^pre1[y]^pre1[x-1];
            res[0]^=t;
            res[1]^=t;
        }
        else cout<<res[x]<<' ';
    }
    cout<<endl;
}


signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc; 
    cin>>tc;
    while (tc--) solve();
    return 0;
}
