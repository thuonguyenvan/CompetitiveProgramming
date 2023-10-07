//https://codeforces.com/contest/1462/problem/D
#include<bits/stdc++.h>
using namespace std;
const int N=2e6+10;
#define int long long
#define ll long long
const int mod=998244353;
const int MAX=1e18;
int n, m, a[N];
void solve(){
  cin>>n;
  int mx=-MAX,s=0;
  for (int i=1; i<=n; i++) {
    cin>>a[i]; 
    mx=max(mx,a[i]); 
    s+=a[i];
    }
  int res=n-1, k=s/mx;
  for (int i=k; i>=1; i--){
    if (s%i) continue;
    int val=s/i, cur=0;
    int check=1;
    for (int j=0; j<n; j++){
        cur+=a[j];
        if (cur>val) { 
            check=0; break;
        }
        if (cur==val) cur=0;
    }
    if (check){
        cout<<n-i<<endl;
        return;
    }
  }
  
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc=1; 
    cin>>tc;
    while (tc--) solve();
    return 0;
}