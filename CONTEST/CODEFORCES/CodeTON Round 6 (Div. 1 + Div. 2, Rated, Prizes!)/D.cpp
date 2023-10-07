#include<bits/stdc++.h>
using namespace std;
const int N=1e6+10;
#define int long long
#define ll long long
const int mod=998244353;
int n, a[N], k, mn[N];

void solve(){
    cin>>n;
    for (int i=1; i<=n; i++){
        cin>>a[i];
    }
    cin>>k;
    mn[n]=a[n];
    for (int i=n-1; i>=1; i--){
        mn[i]=min(a[i],mn[i+1]);
        //cout<<mn[i]<<' ';
    }
    //for (int i=1; i<=n; i++) cout<<mn[i]<<' ';
    //cout<<endl;
    int add=0,res=1e18, tmp=0;
    for (int i=1; i<=n; i++){
        add=mn[i];
        if (i-1) add-=mn[i-1];
        if (add) res=min(res,k/add);
       // cout<<add<<'a'<<(k/add)<<endl;
        k-=res*add;
        cout<<res<<' ';
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
/*
17 17 17 6 0 0 0 0 0 0 0 0 0 
11 3 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 
*/
/*
2
13
48 48 49 53 55 57 62 64 69 74 78 83 84
858
22
53 55 58 59 60 62 62 65 65 66 68 70 70 71 73 77 77 81 81 85 85 87
590
*/