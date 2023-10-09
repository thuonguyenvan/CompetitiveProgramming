#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10;
#define int long long
#define ll long long
const int mod=998244353;
int n, vs[1001][1001], res, m;
int dx[]={1,-1,0,0}, dy[]={0,0,1,-1};
void dfs(int x, int y){
    vs[x][y]=1;
    for (int i=0; i<4; i++){
        int tx=x+dx[i], ty=y+dy[i];
        if (vs[tx][ty] or tx<1 or tx>n or ty<1 or ty>m) continue;
        dfs(tx,ty);
    }
}
 
void solve(){
    char c;
    cin>>n>>m;
    for (int i=1; i<=n; i++){
        for (int j=1; j<=m; j++){
            cin>>c;
            vs[i][j]=(c=='#');
        }
    }
    for (int i=1; i<=n; i++){
        for (int j=1; j<=m; j++){
            if (vs[i][j]) continue;
            dfs(i,j);
            res++;
        }
    }
    cout<<res;
}
 
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc=1; 
    //cin>>tc;
    while (tc--) solve();
    return 0;
}