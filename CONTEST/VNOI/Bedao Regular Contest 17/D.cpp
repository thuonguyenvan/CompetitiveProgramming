#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ll long long
#pragma GCC optimize("O3,expensive-optimizations,Ofast,unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
const int N=2e6+10;
const int mod=998244353;
const int MAX=1e18;
clock_t startTime;
double getCurrentTime() {
	return (double)(clock() - startTime) / CLOCKS_PER_SEC;
}


int n,m,k;
int check[N];

void solve(){
    cin>>n>>m>>k;
	int cnt=m/k,res=1, ans=1;
	//cout<<cnt;
	if (!cnt or !(cnt-1)) cout<<cnt;
	else{
		while (n--){
			res*=cnt;
			res%=mod;
			ans*=(cnt-1);
			ans%=mod;
		}
		cout<<(res-ans)%mod<<endl;
	}



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
