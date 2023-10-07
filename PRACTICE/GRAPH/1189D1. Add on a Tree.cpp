//https://codeforces.com/contest/1189/problem/D1
#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10;
#define int long long
#define ll long long
const int mod=1e9+7;
int n,m, check[N];
void solve(){
    cin>>n;
    n--;
    while (n--){
        for (int i=0; i<2; i++){
            int x;
            cin>>x;
            check[x]++;
            if (check[x]==2) m++;
            if (check[x]==3) m--;
        }
    }
    cout<<(m?"NO":"YES");
}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc=1; 
    //cin>>tc;
    while (tc--) solve();
    return 0;
}
