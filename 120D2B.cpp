#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N = 200005;
#define yes cout << "Yes" << endl;
#define no cout << "No" << endl;
#define pb push_back

void solve()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    unordered_map<int, int>mp;
    for(int i=0; i<n; i++)
    {
        int vl=0;
        for(int j=i;j<n;j++)
        {
            vl+=a[j];
            if(vl<=n)
            {
                mp[vl]++;
            }
            else
            {
                break;
            }
        }
    }

    for(int i=1; i<=n; i++)
    {
        cout<<mp[i]<<" ";
    }
    cout<<endl;

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
