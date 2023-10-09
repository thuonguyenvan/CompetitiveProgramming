#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ll long long
 
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
uniform_int_distribution<int> dist(1, (int) 2e9);
 
const int N=2e6+10;
const int mod=1e9+7;
const int MAX=1e18;
 
int n, a[N];
 
void solve(){
   a[0]=1;
   for (int i=1; i<=1e6+10; i++){
    for (int j=1; j<=6; j++){
        if (i-j>-1) a[i]+=a[i-j];
        a[i]%=mod;
    }
   }
    cin>>n;
    cout<<a[n]<<endl;
}
 
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc=1; 
    //cin>>tc;
    while (tc--) solve();
    return 0;
}
