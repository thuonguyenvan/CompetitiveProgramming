//https://codeforces.com/contest/1702/problem/E
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
int n, m;
class DisjointSet
{
public:
    vector<int> parent, size;
    DisjointSet(int maxSize){
        parent.resize(maxSize);
        size.resize(maxSize);
        for (int i=0; i<maxSize; i++){
            parent[i]=i;
            size[i]=1;
        }
    }
    int find_set(int x){
        if (x==parent[x]) return x;
        return find_set(parent[x]);
    }
    void union_set(int a, int b){
        a=find_set(a);
        b=find_set(b);
        if (a!=b){
            parent[b]=a;
            size[a]+=size[b];
        }
    }
};

void solve(){
    cin>>n;
    DisjointSet dsu(n+1);
    vector<ll> cnt(n + 1);
    for (int i=1; i<=n; i++){
        int a,b; 
        cin>>a>>b;
        cnt[a]++; 
        cnt[b]++;
        dsu.union_set(a,b);
    }
    for (int i=1; i<=n; i++){
        int x=dsu.size[dsu.find_set(i)];
        if (cnt[i]!=2 or x%2) {
            cout<<"NO";
            return;
        }
    }
    cout<<"YES";
    
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);
    int tc=1; 
    cin>>tc;
    while (tc--) {
        solve();
        cout<<endl;
    }
    return 0;
}
