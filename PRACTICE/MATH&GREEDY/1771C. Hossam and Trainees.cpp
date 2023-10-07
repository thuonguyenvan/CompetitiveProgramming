//https://codeforces.com/contest/1771/problem/C
#include<bits/stdc++.h>
using namespace std;
const int N=2e6+10;
#define int long long
#define ll long long
const int mod=998244353;
const int MAX=1e18;
int n, a[N], check[N],snt[N];


void solve(){
    map<int, int> mark;
    cin>>n;
    int res=0;
    for (int i=1; i<=n; i++) cin >> a[i];
    for (int i=1;i<=n; i++ ) {
        int t=a[i];
        for (int j=0; snt[j]*snt[j]<=t; j++){
            int x=snt[j];
            int d=0;
            while (a[i]%x==0) {
                d++;
                a[i]/=x;
            }
            if (d>0){
                if (mark[x]) {
                    cout<<"YES"<<endl;
                    return;
                }
                else mark[x]=1;
            }
        }
        if (a[i]-1) {
            if (mark[a[i]]) {
                cout<<"YES"<<endl;
                return;
            }
            else mark[a[i]]=1;
        }
    }
    cout<<"NO"<<endl;
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    for (int i=2; i<=1000000; i++){
        for (int j=i; j<=1000000; j+=i){
            check[j]++;
        }
    }
    int cnt=0;
    for (int i=2; i<=1000000; i++){
        if (check[i]<2) snt[cnt++]=i;
    }
    int tc=1; 
    cin>>tc;
    while (tc--) solve();
    return 0;
}