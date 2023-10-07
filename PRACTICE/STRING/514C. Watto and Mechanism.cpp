//https://codeforces.com/contest/514/problem/C
#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ll long long
#pragma GCC optimize("O3,expensive-optimizations,Ofast,unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
const int N=1e6+10;
const int mod1=998244353, mod2=1e9+7;
const int MAX=1e18;
const int p1=31, p2=37;
clock_t startTime;
double getCurrentTime() {
	return (double)(clock() - startTime) / CLOCKS_PER_SEC;
}

int n,m, power[N][2];
bitset<1000000009> bs;

void add(string s){
    int l=s.size();
    int hash1=0,hash2=0;
    for (int i=0; i<l; i++){
        int t=s[i];
        hash1+=power[i][0]*t;
        hash1%=mod1;
        hash2+=power[i][1]*t;
        hash2%=mod2;
    }
    bs[hash1]=1;
    bs[hash2]=1;
}

void solve(){
    power[0][0]=power[0][1]=1;
    for (int i=1; i<N; i++){
        power[i][0]=(power[i-1][0]*p1)%mod1;
        power[i][1]=(power[i-1][1]*p2)%mod2;
    }
    cin>>n>>m;
    for (int i=0; i<n; i++){
        string s;
        cin>>s;
        add(s);
    }
    for (int i=0; i<m; i++){
        string s;
        cin>>s;
        int l=s.size();
        int hash1=0,hash2=0;
        for (int i=0; i<l; i++){
            int t=s[i];
            hash1+=power[i][0]*t;
            hash1%=mod1;
            hash2+=power[i][1]*t;
            hash2%=mod2;
        }
        //cout<<hash1<<' '<<hash2<<endl;
        int check=0;
        for (int j=0; j<l; j++){
            for (int c='a'; c<='c'; c++){
                if (c==s[j]) continue;
                int h1=((hash1-power[j][0]*(s[j])+power[j][0]*c)%mod1+mod1)%mod1;
                int h2=((hash2-power[j][1]*(s[j])+power[j][1]*c)%mod2+mod2)%mod2;
                //cout<<h1<<' '<<h2<<endl;
                check|=(bs[h1]&bs[h2]);
            }
        }
        cout<<(check?"YES":"NO")<<endl;
        
    }
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
