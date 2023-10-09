#include<bits/stdc++.h>
using namespace std;
const int N=1e6+10;
#define int long long
#define ll long long
int n, a[N], pres[N], pred[N];
void solve(){
    cin>>n; 
    int l=1,r=n;
    int num[n][2],len=1;
    for (int i=1; i<=n; i++){
        cin>>a[i];
        pres[i]=pres[i-1]+a[i];
        if (a[i]!=1) {
            num[len][0]=a[i];
            num[len++][1]=i;
          //  cout<<num[][1]<<' '<<num[i][0]<<endl;
        }
    }
    while (a[l]==1 and l<n) l++;
    while (a[r]==1 and r>l) r--;
    int prod=1, check=0;
    for (int i=l; i<=n; i++){
        prod*=a[i];
        if (prod>=(int)(1e9)) {
            check=1;
            break;
        }
    }
    if (check or l==r) { 
        cout<<l<<' '<<r<<endl;
        return;
    }
    int mx=-1, res[2];
    res[0]=res[1]=1;
    //cout<<len<<'a';
    for (int i=1; i<len; i++){
        int prod=num[i][0];
        for (int j=i+1; j<len; j++){
            prod*=num[j][0];
            int tmp=pres[num[j][1]]-pres[num[i][1]-1];
            if (prod-tmp>mx){
                mx=prod-tmp;
                res[0]=num[i][1];
                res[1]=num[j][1];
            }
        }
    }
    cout<<res[0]<<' '<<res[1];
    cout<<endl;
    for (int i=0; i<=n; i++){
        a[i]=pres[i]=0;
    }
}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc=1; 
    cin>>tc;
    while (tc--) solve();
    return 0;
}
