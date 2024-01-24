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
    int n;
    cin>>n;
    int last=0;
    int nn=n;
    while(nn)
    {
        nn/=2;
        last++;
    }
    last--;
    int mx=1<<last;
    int f=0;
    for(int i=0;i<30;i++)
    {
        int vl=1<<i;
        if((n & vl) == 0)
        {
            if(vl+mx <= n)
            {
                f++;
            }
            else
            {
                break;
            }
        }
    }
    //f=max(0ll, f-1);

    cout<<(1<<f)<<endl;
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
