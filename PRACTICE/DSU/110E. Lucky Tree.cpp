//https://codeforces.com/contest/110/problem/E
#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ll long long
// #pragma GCC optimize("O3,expensive-optimizations,Ofast,unroll-loops")
// #pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
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
    int union_set(int a, int b){
        a=find_set(a);
        b=find_set(b);
        if (a!=b){
            if (size[a]<size[b]) swap(a,b);
            parent[b]=a;
            size[a]+=size[b];
            return 0;
        }
        return 1;
    }
    int get_res(){
        int res=0;
        int n=parent.size()-1;
        for (int i=1; i<=n; i++){
            if (parent[i]==i) res+=size[i]*(n-size[i])*(n-size[i]-1);
        }
        return res;
    }
};
void solve(){
    cin>>n;
    DisjointSet dsu(n+1);
    for (int i=1; i<n; i++){
        int x,y,w; cin>>x>>y>>w;
        int check=1;
        while (w){
            check&=(w%10==4 or w%10==7);
            w/=10;
            if (!check) break;
        }
        if (!check){
            dsu.union_set(x,y);
        }
    }
    int res=dsu.get_res();
    cout<<res;
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
