#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        ll h,n;
        cin >> h >> n;
        vector<ll> a(n), c(n);
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
        }
        for(int i=0; i<n; i++)
        {
            cin >> c[i];
        }

        ll ans = 0;
        ll l = 1, r = 1e12;
        while(l <= r)
        {
            ll mid = (l+r)/2;
            ll damage = 0;
            for(int i=0; i<n; i++)
            {
                ll tmp = (mid + c[i] - 1) / c[i];
                damage += (tmp * a[i]);
                if(damage >= h)
                {
                    break;
                }
            }
            if(damage >= h)
            {
                ans = mid;
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
        cout << ans << '\n';

    }

    return 0;
}