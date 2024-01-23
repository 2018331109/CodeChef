#include<bits/stdc++.h>
using namespace std;

#define pb push_back

#define int long long int
int INF=1e18;

void solve()
{
    int n;
    cin>>n;
    int arr[n];
    map<int, int>mp;
    mp.clear();
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        mp[arr[i]]++;
    }

    int ans=0;

    for(auto it:mp)
    {
        int value=it.first;
        int cnt=it.second;

        for(auto iit:mp)
        {
            if(cnt>=iit.first)
            {
                if(iit.second>=value)
                {
                    ans++;
                }
            }
            else
            {
                break;
            }
        }
    }

    cout<<ans<<endl;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}
