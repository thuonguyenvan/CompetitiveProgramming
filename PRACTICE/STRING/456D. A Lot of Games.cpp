//https://codeforces.com/contest/456/problem/D
#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ll long long
#pragma GCC optimize("O3,expensive-optimizations,Ofast,unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
const int N=1e6+10;
const ll mod=998244353;
const int MAX=1e18;
clock_t startTime;
double getCurrentTime() {
	return (double)(clock() - startTime) / CLOCKS_PER_SEC;
}

string s;
int child[N][26], ok[N], cnt=0, n, k, dp[N][2];
void add(string s){
    int u=0;
    for (char c:s){
        if (child[u][c-'a']==0) child[u][c-'a']=++cnt;
        u=child[u][c-'a'];
    }
    ok[u]=1;
}

int dfs_win(int v){
    int check=0, tw=0;
    for (int i=0; i<26; i++){
        if (child[v][i]){
            check=1;
            tw+=dfs_win(child[v][i]);
        }
    }
    if (!check) dp[v][0]=1;
    else dp[v][0]=!tw;
    //cout<<v<<" a "<<dp[v][0]<<endl;
    return dp[v][0];
}

int dfs_lose(int v){
    int check=0, tl=0;
    for (int i=0; i<26; i++){
        if (child[v][i]){
            check=1;
            tl+=dfs_lose(child[v][i]);
        }
    }
    if (!check) dp[v][1]=0;
    else dp[v][1]=!tl;
    return dp[v][1];
}

void solve(){
    cin>>n>>k;
    for (int i=1; i<=n; i++){
        cin>>s;
        add(s);
    }
    dfs_win(0);
    dfs_lose(0);
    dp[0][1]=dp[0][0]=0;
    for (int i=0; i<26; i++){
        dp[0][0]|=dp[child[0][i]][0];
        dp[0][1]|=dp[child[0][i]][1];
    }
    // for (int i=0; i<=5; i++){
    //     cout<<i<<' '<<dp[i][0]<<' '<<dp[i][1]<<endl;
    // }
    if (!dp[0][0]) cout<<"Second";
    else if (dp[0][1]) cout<<"First";
    else cout<<(k%2?"First":"Second");
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);
    int tc=1; 
    //cin>>tc;
    while (tc--) {
        solve();
        cout<<endl;
    }
    return 0;
}
