//https://codeforces.com/contest/1732/problem/D1
#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ll long long
#pragma GCC optimize("O3")
#pragma GCC optimize("expensive-optimizations")
#pragma GCC optimize("Ofast")
#pragma GCC optimize ("unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
const int N=2e6+10;
const int mod=1e9+7;
const int MAX=1e18;
clock_t startTime;
double getCurrentTime() {
	return (double)(clock() - startTime) / CLOCKS_PER_SEC;
}

int n;
void solve(){
    cin>>n;
    char x;
    int y;
    map<int, int> last, check;
    map<int,set<int>> in, del;
    //in[x]: k, x%k==0
    //del[k]: x, x%k==0 and check[x]=0
    check[0]=1;
    while (n--){
        cin>>x>>y;
        if (x=='+'){
            check[y]=1;
            for (auto k:in[y]) del[k].erase(y); 
        }
        else if (x=='-'){
            check[y]=0;
            for (auto k:in[y]) del[k].insert(y); 
        }
        else{
            if (del[y].size()) {
                auto i=del[y].begin();
                cout<<*i<<endl;
            //    last[y]=*i;
            }
            else{
                while (check[last[y]]){
                    in[last[y]].insert(y);
                    last[y]+=y;
                }
                cout<<last[y]<<endl;
            }
        }
    }
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);
    int tc=1; 
    //cin>>tc;
    while (tc--) solve();
    return 0;
}