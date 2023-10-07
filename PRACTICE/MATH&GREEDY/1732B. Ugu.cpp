//https://codeforces.com/contest/1732/problem/B
#include<bits/stdc++.h>
using namespace std;
const int N=2e6+10;
#define int long long
#define ll long long
const int mod=998244353;
int n;
string s;
void solve(){
    cin>>n;
    cin>>s;
    int l=0;
    while (s[l]==s[0] and l<n) l++;
    while (s[l]=='1' and l<n ) l++;
    if (l==n) {
        cout<<0<<endl;
        return;
    }
    int res=1;
    char x=s[l];
    for (int i=l; i<n; i++){
        if (s[i]!=x){
            res++;
            x=s[i];
        }
    }
    cout<<res<<endl;
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc=1; 
    cin>>tc;
    while (tc--) solve();
    return 0;
}
