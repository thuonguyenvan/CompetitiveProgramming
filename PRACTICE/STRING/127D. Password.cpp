//https://codeforces.com/contest/127/problem/D
#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ll long long
#pragma GCC optimize("O3,expensive-optimizations,Ofast,unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
const int N=1e6+10;
const ll mod=479001599;
const int MAX=1e18;
clock_t startTime;
double getCurrentTime() {
	return (double)(clock() - startTime) / CLOCKS_PER_SEC;
}

vector<int> zAlgo(string s) {
    int n = s.length();
    vector<int> z(n);
    int x = 0, y = 0;
    for (int i = 1; i <= n - 1; i++) {
        z[i] = max(0ll, min(z[i - x], y - i + 1));
        while (i + z[i] < n && s[z[i]] == s[z[i] + i]) {
            x = i;
            y = i + z[i];
            z[i]++;
        }
    }
    return z;
}
//fixprefifixfisuffix

string s;
int good[N], cnt[N];
void solve(){
    cin>>s;
    vector<int> z=zAlgo(s);
    //for (auto i: z) cout<<i<<' ';
    int n=s.size();
    for (int i=0; i<n; i++) {
        if (i+z[i]==n) good[z[i]]=1;
        cnt[z[i]]++;
    }
    int tot=0, res=0;
    for (int i=n-1; i>=0; i--){
        tot+=cnt[i];
       // if (tot) cout<<tot<<' '<<good[i]<<endl;
        if (tot>=2 and good[i]) {
            res=i;
            break;
            }
    }
    if (!res) cout<<"Just a legend";
    else{
        for (int i=0; i<res; i++) cout<<s[i];
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