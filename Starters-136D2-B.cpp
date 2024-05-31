#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define neg cout << -1 << endl;
#define pb push_back
#define ss second
#define ff first

const int md=998244353;
const int N = 2e5+5;

void solve()
{
     int n;
     cin>>n;
     string s;
     cin>>s;
     int total=0, ans=0;
     unordered_map<int, int>mp;
     mp[0]++;
     for(int i=0;i<n;i++)
     {
         ans+=i+1;
         if(s[i]=='1')
         {
             total++;
         }
         else
         {
             total--;
         }
         if(mp[total])
         {
             ans+=mp[total];
         }
         mp[total]++;
     }
//     for(auto it:mp)
//     {
//         cout<<it.ff<<" "<<it.ss<<endl;
//     }
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
