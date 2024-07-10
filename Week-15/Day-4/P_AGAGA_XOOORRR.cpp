#include<bits/stdc++.h>
#define ll long long
using namespace std;

const ll mod = 1e9 + 7;

ll powe(ll x, ll y)
{
    x = x % mod, y = y % (mod - 1);
    ll ans = 1;
    while (y > 0)
    {
        if (y & 1)
        {
            ans = (1ll * x * ans) % mod;
        }
        y >>= 1;
        x = (1ll * x * x) % mod;
    }
    return ans;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        int x =0;
 
        for(int i =0; i<n; i++)
        {
            cin >> a[i];
            x ^= a[i];
        }
 
        if(x==0)
        {
            cout<<"YES"<<endl;
        }
        else 
        {
            // 5 1 4 5 -> 5 5 5
            // 5 5 5 5 5 

            int k =0;
            int count =0;
            for(int i =0; i<n; i++)
            {
               k^=a[i];
               if(k==x)
               {
                  k=0;
                  count++;
               }
            }
 
            if(count>=2)
            {
                cout<<"YES"<<endl;
            }
            else 
            {
                cout<<"NO"<<endl;
            }
        }
    }

    return 0;
}