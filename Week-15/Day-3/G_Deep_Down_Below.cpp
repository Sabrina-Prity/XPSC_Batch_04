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
        ll n;
        cin >> n;
        vector<pair<ll,ll>> a(n);
        for(int i=0; i<n; i++)
        {
            ll x;
            cin >> x;
            vector<ll> p(x);
            ll mx_power = -1;
            for(int j=0; j<x; j++)
            {
                cin >> p[j];
                mx_power = max(mx_power, p[j] - j+1);
            }
            a[i] = {mx_power,x};
        }
        sort(a.begin(),a.end());

        ll l = a[0].first, r = a[n-1].first;
        ll ans = 1e12;
        while(l <= r)
        {
            ll mid = (l+r)/2;
            ll cur = mid;
            bool ok = true;
            for(int i=0; i<n; i++)
            {
                if(cur >= a[i].first)
                {
                    cur += a[i].second;
                }
                else
                {
                    ok = false;
                    break;
                }
            }

            if(ok)
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