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
int check[N];

void solve(){
    vector<int> prime;
    for (int i=2; i<=2e6; i++){
        for (int j=i; j<=2e6; j+=i){
            check[j]+=1;
        }
    }
    for (int i=2; i<=2e6; i++){
        if (check[i]==1) prime.emplace_back(i);
    }
    // cout<<prime.back()<<endl;
    // cout<<getCurrentTime();
    //for (int i=0; i<=10; i++) cout<<prime[i]<<endl;
    cin>>n;
    int res=0;
    int l=prime.size();
    for (int i=0;prime[i]*prime[i]*prime[i]<=n; i++){
		// wtf it's ac if i use pow ??
        for (int j=i+1;prime[i]*prime[i]*prime[i]*(pow(prime[j],3))<=n; j++ ) res+=1;
    }
    cout<<res;
}
//1000000000000000000
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
