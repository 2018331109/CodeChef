#include <bits/stdc++.h>
using namespace std;
#define int long long
#define yes cout << "Yes" << endl
#define no cout << "No" << endl
#define neg cout << -1 << endl
#define pb push_back
#define ss second
#define ff first

const int mod = 1e9 + 7;
const int N = 2e5 + 5;
const int INF = 1e18;
int md = 998244353;

void solve( )
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++) cin>>a[i];
    set<int>st;
    vector<int>v(n+1, 0);
    int cnt=1, sum=0;
    for(int i=0; i<n-1; i++)
    {
        st.insert(a[i]);
        if(*st.rbegin()==i+1)
        {
            v[i]=-1;
            cnt++;
            continue;
        }
        st.erase(a[i]);
        st.insert(a[i+1]);
        if(*st.rbegin()==i+1)
        {
            v[i]=1;
        }
        st.erase(a[i+1]);
        st.insert(a[i]);
    }
    int mx=0;
    for(int i=0; i<n; i+=2)
    {
        sum+=v[i];
        mx=max(mx, sum);
        sum=max(sum, 0ll);
    }
    sum=0;
    for(int i=1; i<n; i+=2)
    {
        sum+=v[i];
        mx=max(mx, sum);
        sum=max(sum, 0ll);
    }
    cout<<cnt+mx<<endl;

}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int test=1;
    cin >> test;
    for (int tc = 1; tc <= test; tc++)
    {
        solve();
    }

    return 0;
}
