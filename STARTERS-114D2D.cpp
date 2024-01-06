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
     if(n==1)
     {
         cout<<1<<endl;
         return;
     }
     if(n==2)
     {
         cout<<-1<<endl;
         return;
     }

     int ans[n][n];
     memset(ans, 0, sizeof(ans));
     int cnt=0;
     for(int j=0;j<n-1;j++)
     {
         cnt+=j+1;
         for(int i=0;i<=j;i++)
         {
             ans[i][j]=1;
         }
     }
     int l=1, r=2;
     int rm=(n*n)/2+((n*n)%2)-cnt;
     int k=0;
     if((rm%2 && n%2==0) || (rm%2==0 && n%2))
     {
         ans[n-2][0]=1;
         ans[n-2][n-2]=0;
     }
     while(rm--)
     {
         ans[k++][n-1]=1;
     }
//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<n;j++)
//         {
//             cout<<ans[i][j]<<" ";
//         }
//         cout<<endl;
//     }



     for(int i=0;i<n;i++)
     {
         for(int j=0;j<n;j++)
         {
             if(ans[i][j]==1)
             {
                 ans[i][j]=l;
                 l+=2;
             }
             else
             {
                 ans[i][j]=r;
                 r+=2;
             }
         }
     }

     for(int i=0;i<n;i++)
     {
         for(int j=0;j<n;j++)
         {
             cout<<ans[i][j]<<" ";
         }
         cout<<endl;
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
