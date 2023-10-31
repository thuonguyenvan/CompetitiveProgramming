#include<bits/stdc++.h>
using namespace std;

#define int long long
#define ll long long
#pragma GCC optimize("O3,expensive-optimizations,Ofast,unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
const int N=1e6+10;
const int mod=479001599;
const int MAX=1e18;

clock_t startTime;
double getCurrentTime() {
	return (double)(clock() - startTime) / CLOCKS_PER_SEC;
}


void solve(){       
    char x;
    int n, res = 0, cur = 1;
    for (int i = 1; i <= 4; i ++) {
        cin >> x;
        n = x-'0';
        if (!n) n = 10;
        res += abs(cur - n) + 1;
        cur = n;
    }
    cout << res;
    
}
 
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    int local=0;
	if(fopen("input.txt", "r")){
        freopen("input.txt", "r", stdin); 
        freopen( "output.txt", "w", stdout);
        local=1;
    }
    int tc=1; 
    cin>>tc;
    while (tc--) {
        solve();
        cout<<endl;
    }
    if (local) cout<<getCurrentTime();
    return 0;
}