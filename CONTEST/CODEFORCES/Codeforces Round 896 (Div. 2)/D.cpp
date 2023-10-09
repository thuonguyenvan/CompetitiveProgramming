#include<bits/stdc++.h>
using namespace std;
const int N=1e6+10;
#define int long long
#define ll long long
int n, a[N], p2[35];
void solve(){
    int sum=0;
    int n; cin>>n;
    for (int i=1; i<=n; i++){
        cin>>a[i];
        sum+=a[i];
    }
    if (sum%n) {
        cout<<"No"<<endl;
        return;
    }
    sum/=n;
    multiset<int> s1,s2;
    for (int i=1; i<=n; i++){
        if (a[i]==sum) continue;
        int check=0;
        for (int j=0; j<35; j++){
            for (int k=0; k<35; k++){
                if (p2[j]-p2[k]==a[i]-sum) {
                    s1.insert(j); 
                    s2.insert(k);
                    check=1;
                    break;
                }
            }
        if (check) break;
        }
        if(check==0) {
            cout<<"No"<<endl;
            return;
        }
    }
    cout<<(s1==s2?"YES":"NO")<<endl;
}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    p2[0]=1;
    for (int i=1;i<35; i++){
        p2[i]=p2[i-1]*2;
    }
    int tc=1; 
    cin>>tc;
    while (tc--) solve();
    return 0;
}
