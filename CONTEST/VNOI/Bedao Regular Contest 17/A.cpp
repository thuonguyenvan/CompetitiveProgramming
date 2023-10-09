#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ll long long
#pragma GCC optimize("O3,expensive-optimizations,Ofast,unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
const int N=2e6+10;
const int mod=1e9+7;
const int MAX=1e18;
clock_t startTime;
double getCurrentTime() {
	return (double)(clock() - startTime) / CLOCKS_PER_SEC;
}


int n, a, b;


void solve(){
    cin>>a>>b;
    int res=0;
    for (int i=2; i<(int)sqrt(b)+1; i++){
        while (b%i==0){
            b/=i;
            res+=1;
        }
    }
    if (b-1) res+=1;
    for (int i=2; i<=(int)sqrt(a)+1; i++){
        while (a%i==0){
            a/=i;
            res-=1;
        }
    }
    if (a-1) res-=1;
    cout<<res+1;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
    int tc=1; 
   // cin>>tc;
    while (tc--) solve();
    return 0;
}
