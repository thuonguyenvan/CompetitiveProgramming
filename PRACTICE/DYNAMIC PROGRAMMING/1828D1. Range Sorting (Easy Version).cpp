//https://codeforces.com/contest/1828/problem/D1
#include<bits/stdc++.h>
using namespace std;
const int N=1e6+10;
#define int long long
#define ll long long
int n, a[N];
void solve(){
    int n; cin>>n;
    for (int i=1; i<=n; i++) cin>>a[i];
    int res=0;
    for (int i=1; i<=n; i++){
        stack<int> st;
        st.push(a[i]);
        for (int j=i+1; j<=n; j++){
            if (a[j]>=st.top()) st.push(a[j]);
            else{
                int temp=st.top();
                while (!st.empty() and a[j]<st.top()) st.pop();
                st.push(temp);
            }
            res+=(j-i+1-st.size());
        }
    }
    cout<<res<<endl;
}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc=1; 
    cin>>tc;
    while (tc--) solve();
    return 0;
}
