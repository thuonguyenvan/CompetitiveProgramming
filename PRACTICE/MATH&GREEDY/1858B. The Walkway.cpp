//https://codeforces.com/contest/1858/problem/B
#include<bits/stdc++.h>
using namespace std;
const int N=2e6+10;
#define int long long
#define ll long long
const int mod=998244353;
const int MAX=1e18;
int n, m, d, a[N];

void solve(){
    cin>>n>>m>>d;
    for (int i=1; i<=m; i++) cin>>a[i];
    a[0]=1;
    a[m+1]=n+1;
    int res=0,ans=0;
    for (int i=0; i<=m; i++){
        res+=((a[i+1]-a[i]-1+d)/d);
        if (i<m){
            if ((a[i+1]-a[i]-1+d)/d+(a[i+2]-a[i+1]-1+d)/d>(a[i+2]-a[i]-1+d)/d) ans+=1;
        }
    }
    if (ans) res--;
    else ans=m;
    cout<<res<<' '<<ans<<endl;
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc=1; 
    cin>>tc;
    while (tc--) solve();
    return 0;
}