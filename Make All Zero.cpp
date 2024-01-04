#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define neg cout<<-1<<endl;
#define fs first
#define sc second

const int mod = 1e9 + 7;
const int md = 998244353;
const int INF = 1e18;


void solve()
{
    int n;
    cin>>n;
    int a[n];
    vector<int>v;
    int mn=INT_MAX;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        if(mn>=a[i])
        {
            v.pb(a[i]);
            mn=a[i];
        }

    }

    int m=v.size();
    int ans=n;
    for(int i=m-1; i>=0; i--)
    {
        ans=min(ans, n-(m-i)+v[i]);
    }
    cout<<ans<<endl;

}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int test = 1;
    cin >> test;

    for (int tc = 1; tc <= test; tc++)
    {
        solve();
    }

    return 0;
}
