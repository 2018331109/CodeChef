#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define neg cout<<-1<<endl;
#define ff first
#define ss second

const int mod = 1e9 + 7;
const int md = 998244353;
const int INF = 1e18;

void solve()
{
    int a, b;
    cin>>a>>b;
    int d=abs(a-b);
    int l=0, r=d;
    int n=0;
    while(l<=r)
    {
        int m=(l+r)/2ll;
        if(m*(m+1ll)/2ll <= d)
        {
            n=m;
            l=m+1ll;
        }
        else
        {
            r=m-1ll;
        }
        //cout<<l<<" "<<r<<endl;

    }
    if(n*(n+1ll)/2ll==d)
    {
        cout<<n<<endl;
        return;
    }
    n++;
    int dif=(n*(n+1ll))/2ll-d;
    if(dif%2 == 0)
    {
        cout<<n<<endl;
    }
    else
    {
        n++;
        dif=(n*(n+1ll))/2ll-d;
        if(dif%2 == 0)
        {
            cout<<n<<endl;
        }
        else
        {
            cout<<n+1<<endl;
        }


    }
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
