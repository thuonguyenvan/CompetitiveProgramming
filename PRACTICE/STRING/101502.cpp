//https://codeforces.com/gym/101502/problem/G
#include <bits/stdc++.h>
#pragma GCC optimize("O3")
#pragma GCC optimize("expensive-optimizations")
using namespace std;
typedef long long ll;
#define int long long 
const int N=1e6+10;
string s;
int child[N][26], pos=0, res[N], mark[N], cnt[N];
void add(string s){
    int u=0; int j=0;
    for (char c:s){
        j++;
        if (child[u][c-'a']==0) {
          child[u][c-'a']=++pos;
          mark[pos]=j;
        }
        u=child[u][c-'a'];
        cnt[u]++;
        res[mark[u]]=max(res[mark[u]], cnt[u]);
    }
}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc; cin>>tc;
    while (tc--){
      int n,q; 
      cin>>n>>q;
      while (n--){
        cin>>s; 
        reverse(s.begin(), s.end());
        add(s);
      }
      while (q--){
        int x; cin>>x; cout<<res[x]<<endl;
      }
      for (int i=0; i<=pos; i++){
        res[i]=0; mark[i]=0; cnt[i]=0;
        for (int j=0; j<26; j++) child[i][j]=0;
      }
      pos=0;
    }
}
