//https://codeforces.com/contest/1732/problem/D2
#include<bits/stdc++.h>
using namespace std;
const int N=2e6+10;
#define int long long
#define ll long long
const int mod=998244353;
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
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc=1; 
    //cin>>tc;
    while (tc--) solve();
    return 0;
}
