#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ll long long
#define reset(a,n) for( int i=0; i<=n; i++) a[i]=0
#pragma GCC optimize("O3,expensive-optimizations,Ofast,unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
const int N=1e6+10;
const ll mod=479001599;
const int MAX=1e18;
clock_t startTime;
double getCurrentTime() {
	return (double)(clock() - startTime) / CLOCKS_PER_SEC;
}
int n, a[N], check[N];
vector<int> prime;
map<int, int> cnt;
set<int> st;
void solve(){
    cnt.clear();
    st.clear();
    cin>>n;
    for (int i=1; i<=n; i++) cin>>a[i];
    for (int i=1; i<=n; i++){
        for (auto j: prime){
            while (a[i]%j==0) {
                cnt[j]++;
                st.insert(j);
                a[i]/=j;
            }
           
        }
         if (a[i]!=1) {
            cnt[a[i]]++;
            st.insert(a[i]);
         }
    }
    for (auto i: st) if (cnt[i]%n) {
       // cout<<i<<' '<<cnt[i]<<endl;
        cout<<"NO"; 
        return;
        }
    cout<<"YES";
    
    


}
 
signed main(){
    ios_base::sync_with_stdio(false);
    for (int i=2; i<=2e3; i++){
        for (int j=i; j<=2e3; j+=i) check[j]+=1;
    }
    for (int i=2; i<=2e3; i++) if (check[i]==1) prime.push_back(i);
    cin.tie(nullptr);
// # 	freopen("input.txt", "r", stdin);
// # 	freopen("output.txt", "w", stdout);
    int tc=1; 
    cin>>tc;
    while (tc--) {
        solve();
        cout<<endl;
    }
    return 0;
}