#include<bits/stdc++.h>
using namespace std;

#define int long long
#define ll long long
#pragma GCC optimize("O3,expensive-optimizations,Ofast,unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#define reset(a,n) for( int i = 0; i <= n; i++) a[i] = 0
#define all(a) a.begin(), a.end()
const int N   = 1e6 + 10;
const int mod = 479001599;
const int MAX = INFINITY;

clock_t startTime;
double getCurrentTime() {
	return (double)(clock() - startTime) / CLOCKS_PER_SEC;
}
// trong mot thanh phan lien thong thi chon ra i nho nhat
// thu tu ket noi khong quan trong, ket noi duoc cang nhieu cang tot
// co truong hop nao luc dau khong merge duoc voi 1 nhung co the merge duoc voi cai khac sau do merge voi 1
// dk: a[1] + a[i] >= (i)*c
// th xau nhat: a[1]=0 ->  a[i] >= (i)*c
// c = 1
// a[i] = i 
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
    int n, c;
    cin >> n >> c;
    int a[n + 1];
    for (int i = 1; i <= n; i++ ) cin >> a[i];
    int cur = a[1];
    DisjointSet dsu(n+1);
    int vs[n+1];
    reset(vs, n);
    vs[1] = 1;
    for (int i = 2; i <= n; i++) {
        if (cur + a[i] >= i * c) {
            // cout << i << ' ' << cur << endl;
            // 1 - 2, 
            int j = i;
            while (!vs[j]){
                dsu.union_set(1,j);
                vs[j] = 1;
                cur += a[j--];
                // cout << i << ' ' << cur << ' ' << j << endl;
            }
            
        }
    }
    for (int i = 2; i <= n; i++){
        if (dsu.find_set(1) != dsu.find_set(i)) {
            // cout << i << endl;
            cout << "NO";
            return;
        }
    }
    cout << "YES";

}
 
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    int local = 0;
	if(fopen("input.txt", "r")){
        freopen("input.txt", "r", stdin); 
        freopen( "output.txt", "w", stdout);
        local = 1;
    }
    int tc = 1; 
    cin >> tc;
    while (tc--) {
        solve();
        cout << endl;
    }
    if (local) cout << getCurrentTime();
    return 0;
}