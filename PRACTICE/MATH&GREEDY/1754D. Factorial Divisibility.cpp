//https://codeforces.com/contest/1754/problem/D
#include<bits/stdc++.h>
using namespace std;
const int N=2e6+10;
#define int long long
#define ll long long
const int mod=998244353;
const int MAX=1e18;
int n, x, cnt[N];
void solve(){
    cin>>n>>x;
    for (int i=0; i<n; i++) {
        int y; cin>>y;
        cnt[y]++;
    }
    for (int i=1; i<x; i++){
        cnt[i+1]+=cnt[i]/(i+1);
        if (cnt[i]%(i+1)){
            cout<<"No"<<endl;
            return;
        }
    }
    cout<<"Yes"<<endl;
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc=1; 
    //cin>>tc;
    while (tc--) solve();
    return 0;
}